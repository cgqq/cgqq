void seek() /*����*/
{
	int i, item, flag;
	char s1[21]; /* ��������ѧ�������+1Ϊ׼*/
	printf("------------------\n");
	printf("-----1.��ѧ�Ų�ѯ-----\n");
	printf("-----2.��������ѯ-----\n");
	printf("-----3.�˳����˵�-----\n");
	printf("------------------\n");
	while (1)
	{
		printf("��ѡ���Ӳ˵����:");
		scanf("%d", &item);
		flag = 0;
		switch (item)
		{
		case 1:
			printf("������Ҫ��ѯ��ѧ����ѧ��:\n");
			scanf("%s", s1);
			for (i = 0; i<n; i++)
			if (strcmp(s1,stu[i].StudentId) == 0)
			{
				flag = 1;
				printf("ѧ��ѧ��\tѧ������\t����\t����ʱ��\t�뿪ʱ��\n");
				printf("--------------------------------------------------------------------\n");
				printf("%s\t%s\t%d\t%6\t%.1f\t%.1f\t%.1f\n", stu[i].StudentId,stu[i].StudentName,stu[i].StudentEnter,stu[i].StudentLeave);
			}
			if (0 == flag)
				printf("��ѧ�Ų����ڣ�\n"); break;
		case 2:
			printf("������Ҫ��ѯ��ѧ��������:\n");
			scanf("%s", s1);
			for (i = 0; i<n; i++)
			if (strcmp(stu[i].StudentName, s1) == 0)
			{
				flag = 1;
				printf("ѧ��ѧ��\tѧ������\t����\t����ʱ��\t�뿪ʱ��\n");
				printf("--------------------------------------------------------------------\n");
				printf("%s\t%s\t%f\t%f\n", stu[i].StudentId, stu[i].StudentName,stu[i].StudentEnter, stu[i].StudentLeave);
			}
			if (0 == flag)
				printf("�����������ڣ�\n"); break;
		case 3:return;
		default:printf("����1-3֮��ѡ��\n");
		}
	}
}