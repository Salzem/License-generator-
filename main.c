#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main()
{
    FILE* license = NULL;
    license = fopen("license.txt", "w+");
    int menu=0, date=0, choice=0;
    char name[1000];
    if (license == NULL)
        printf("Cannot open License.txt");

    printf("\n            License Generator         \n");
    printf("\n ================= MENU ================\n");
    printf(" | 1) GNU Affero General Public License|\n");
    printf(" | 2) Apache License 2.0               |\n");
    printf(" | 3) BSD 2-Clause License             |\n");
    printf(" | 4) BSD 3-Clause License             |\n");
    printf(" | 5) Creative Commons Zero v1.0       |\n");
    printf(" | 6) GNU General Public License v2.0  |\n");
    printf(" | 7) GNU General Public License v3.0  |\n");
    printf(" | 8) MIT License                      |\n");
    printf(" | 9) Mozilla Public License           |\n");
    printf(" | 10) GNU Lesser GPL v2.1             |\n");
    printf(" | 11) GNU Lesser GPL v3.0             |\n");
    printf(" | 12) The Unlicense                   |\n");
    printf(" | 13) What The Fuck You Want License  |\n");
    printf(" =======================================\n");

    do
    {
        scanf("%d",&menu);
    } while ((menu<0)||(menu>90));

    if ((menu!=5)&&(menu!=9)&&(menu!=12)&&(menu!=13))
    {
        printf("Enter the year.\n");
        scanf("%d",&date);
        printf("Enter the name(s) of the author(s).\n");
        getchar();
        fgets(name, 1000, stdin);
    }
    printf("\n");

    switch (menu)
    {
        case 1:
            {
                fprintf(license, "Copyright (C) %d %s\n", date, name);
                fprintf(license, "This program is free software: you can redistribute it and/or modify\n");
                fprintf(license, "it under the terms of the GNU Affero General Public License as\n");
                fprintf(license, "published by the Free Software Foundation, either version 3 of the\n");
                fprintf(license, "License, or (at your option) any later version.\n\n");
                fprintf(license, "This program is distributed in the hope that it will be useful,\n");
                fprintf(license, "but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                fprintf(license, "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
                fprintf(license, "GNU Affero General Public License for more details.\n\n");
                fprintf(license, "You should have received a copy of the GNU Affero General Public License\n");
                fprintf(license, "along with this program.  If not, see <http://www.gnu.org/licenses/>.");

                printf("Copyright (C) %d %s\n", date, name);
                printf("This program is free software: you can redistribute it and/or modify\n");
                printf("it under the terms of the GNU Affero General Public License as\n");
                printf("published by the Free Software Foundation, either version 3 of the\n");
                printf("License, or (at your option) any later version.\n\n");
                printf("This program is distributed in the hope that it will be useful,\n");
                printf("but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                printf("MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
                printf("GNU Affero General Public License for more details.\n\n");
                printf("You should have received a copy of the GNU Affero General Public License\n");
                printf("along with this program.  If not, see <http://www.gnu.org/licenses/>.");

                break;
            }

        case 2:
            {
                fprintf(license, "Copyright %d %s\n", date, name);
                fprintf(license, "Licensed under the Apache License, Version 2.0 (the \"License\");\n");
                fprintf(license, "you may not use this file except in compliance with the License.\n");
                fprintf(license, "You may obtain a copy of the License at\n\n");
                fprintf(license, "    http://www.apache.org/licenses/LICENSE-2.0\n\n");
                fprintf(license, "Unless required by applicable law or agreed to in writing, software\n");
                fprintf(license, "distributed under the License is distributed on an \"AS IS\" BASIS,\n");
                fprintf(license, "WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n");
                fprintf(license, "See the License for the specific language governing permissions and\n");
                fprintf(license, "limitations under the License.");

                printf("Copyright %d %s\n", date, name);
                printf("Licensed under the Apache License, Version 2.0 (the \"License\");\n");
                printf("you may not use this file except in compliance with the License.\n");
                printf("You may obtain a copy of the License at\n\n");
                printf("    http://www.apache.org/licenses/LICENSE-2.0\n\n");
                printf("Unless required by applicable law or agreed to in writing, software\n");
                printf("distributed under the License is distributed on an \"AS IS\" BASIS,\n");
                printf("WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n");
                printf("See the License for the specific language governing permissions and\n");
                printf("limitations under the License.");

                break;
            }

        case 3:
            {
                fprintf(license, "Copyright (c) %d %s", date, name);
                fprintf(license, "All rights reserved.\n\n");
                fprintf(license, "Redistribution and use in source and binary forms, with or without modification, are permitted\n");
                fprintf(license, "provided that the following conditions are met:\n\n");
                fprintf(license, "1. Redistributions of source code must retain the above copyright notice, this list of conditions\n");
                fprintf(license, "and the following disclaimer.\n\n");
                fprintf(license, "2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions\n");
                fprintf(license, "and the following disclaimer in the documentation and/or other materials provided with the\n");
                fprintf(license, "distribution.\n\n");
                fprintf(license, "THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\" AND\n");
                fprintf(license, "ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED\n");
                fprintf(license, "WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.\n");
                fprintf(license, "IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,\n");
                fprintf(license, "INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT\n");
                fprintf(license, "NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR\n");
                fprintf(license, "PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,\n");
                fprintf(license, "WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)\n");
                fprintf(license, "ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY\n");
                fprintf(license, "OF SUCH DAMAGE.");

                printf("Copyright (c) %d %s", date, name);
                printf("All rights reserved.\n\n");
                printf("Redistribution and use in source and binary forms, with or without modification, are permitted\n");
                printf("provided that the following conditions are met:\n\n");
                printf("1. Redistributions of source code must retain the above copyright notice, this list of conditions\n");
                printf("and the following disclaimer.\n\n");
                printf("2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions\n");
                printf("and the following disclaimer in the documentation and/or other materials provided with the\n");
                printf("distribution.\n\n");
                printf("THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\" AND\n");
                printf("ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED\n");
                printf("WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.\n");
                printf("IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,\n");
                printf("INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT\n");
                printf("NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR\n");
                printf("PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,\n");
                printf("WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)\n");
                printf("ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY\n");
                printf("OF SUCH DAMAGE.");

                break;
            }

        case 4:
            {
                fprintf(license, "Copyright (c) %d %s", date, name);
                fprintf(license, "All rights reserved.\n\n");
                fprintf(license, "Redistribution and use in source and binary forms, with or without modification, are permitted\n");
                fprintf(license, "provided that the following conditions are met:\n\n");
                fprintf(license, "1. Redistributions of source code must retain the above copyright notice, this list of conditions\n");
                fprintf(license, "and the following disclaimer.\n\n");
                fprintf(license, "2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions\n");
                fprintf(license, "and the following disclaimer in the documentation and/or other materials provided with the\n");
                fprintf(license, "distribution.\n\n");
                fprintf(license, "3. Neither the name of the copyright holder nor the names of its contributors may be used to\n");
                fprintf(license, "endorse or promote products derived from this software without specific prior written\n");
                fprintf(license, "permission.\n\n");
                fprintf(license, "THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\" AND\n");
                fprintf(license, "ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED\n");
                fprintf(license, "WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.\n");
                fprintf(license, "IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,\n");
                fprintf(license, "INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT\n");
                fprintf(license, "NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR\n");
                fprintf(license, "PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,\n");
                fprintf(license, "WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)\n");
                fprintf(license, "ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY\n");
                fprintf(license, "OF SUCH DAMAGE.");

                printf("Copyright (c) %d %s", date, name);
                printf("All rights reserved.\n\n");
                printf("Redistribution and use in source and binary forms, with or without modification, are permitted\n");
                printf("provided that the following conditions are met:\n\n");
                printf("1. Redistributions of source code must retain the above copyright notice, this list of conditions\n");
                printf("and the following disclaimer.\n\n");
                printf("2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions\n");
                printf("and the following disclaimer in the documentation and/or other materials provided with the\n");
                printf("distribution.\n\n");
                printf("3. Neither the name of the copyright holder nor the names of its contributors may be used to\n");
                printf("endorse or promote products derived from this software without specific prior written\n");
                printf("permission.\n\n");
                printf("THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\" AND\n");
                printf("ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED\n");
                printf("WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.\n");
                printf("IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,\n");
                printf("INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT\n");
                printf("NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR\n");
                printf("PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,\n");
                printf("WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)\n");
                printf("ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY\n");
                printf("OF SUCH DAMAGE.");

                break;
            }

        case 5:
            {
                fprintf(license, "The person who associated a work with this deed has dedicated the work to\n");
                fprintf(license, "the public domain by waiving all of his or her rights to the work worldwide under\n");
                fprintf(license, "copyright law, including all related and neighboring rights, to the extent allowed\n");
                fprintf(license, "by law.\n\n");
                fprintf(license, "You can copy, modify, distribute and perform the work, even for commercial\n");
                fprintf(license, "purposes, all without asking permission. See Other Information below.\n\n");
                fprintf(license, "Other Information\n\n");
                fprintf(license, "In no way are the patent or trademark rights of any person affected by CC0, nor are the\n");
                fprintf(license, "rights that other persons may have in the work or in how the work is used, such as\n\n");
                fprintf(license, "publicity or privacy rights.\n\n");
                fprintf(license, "Unless expressly stated otherwise, the person who associated a work with this deed\n");
                fprintf(license, "makes no warranties about the work, and disclaims liability for all uses of the work, to\n");
                fprintf(license, "the fullest extent permitted by applicable law.\n\n");
                fprintf(license, "When using or citing the work, you should not imply endorsement by the author or\n");
                fprintf(license, "the affirmer.");

                printf("The person who associated a work with this deed has dedicated the work to\n");
                printf("the public domain by waiving all of his or her rights to the work worldwide under\n");
                printf("copyright law, including all related and neighboring rights, to the extent allowed\n");
                printf("by law.\n\n");
                printf("You can copy, modify, distribute and perform the work, even for commercial\n");
                printf("purposes, all without asking permission. See Other Information below.\n\n");
                printf("Other Information\n\n");
                printf("In no way are the patent or trademark rights of any person affected by CC0, nor are the\n");
                printf("rights that other persons may have in the work or in how the work is used, such as\n\n");
                printf("publicity or privacy rights.\n\n");
                printf("Unless expressly stated otherwise, the person who associated a work with this deed\n");
                printf("makes no warranties about the work, and disclaims liability for all uses of the work, to\n");
                printf("the fullest extent permitted by applicable law.\n\n");
                printf("When using or citing the work, you should not imply endorsement by the author or\n");
                printf("the affirmer.");

                break;
            }

        case 6:
            {
                fprintf(license, "Copyright (C) %d %s\n", date, name);
                fprintf(license, "This program is free software: you can redistribute it and/or\n");
                fprintf(license, "modify it under the terms of the GNU General Public License\n");
                fprintf(license, "as published by the Free Software Foundation; either version 2\n");
                fprintf(license, "of the License, or (at your option) any later version.\n\n");
                fprintf(license, "This program is distributed in the hope that it will be useful,\n");
                fprintf(license, "but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                fprintf(license, "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
                fprintf(license, "GNU General Public License for more details.\n\n");
                fprintf(license, "You should have received a copy of the GNU General Public License\n");
                fprintf(license, "along with this program; if not, write to the Free Software");
                fprintf(license, "Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.");

                printf("Copyright (C) %d %s\n", date, name);
                printf("This program is free software: you can redistribute it and/or\n");
                printf("modify it under the terms of the GNU General Public License\n");
                printf("as published by the Free Software Foundation; either version 2\n");
                printf("of the License, or (at your option) any later version.\n\n");
                printf("This program is distributed in the hope that it will be useful,\n");
                printf("but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                printf("MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
                printf("GNU General Public License for more details.\n\n");
                printf("You should have received a copy of the GNU General Public License\n");
                printf("along with this program; if not, write to the Free Software");
                printf("Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.");

                break;
            }

        case 7:
            {
                fprintf(license, "Copyright (C) %d %s\n", date, name);
                fprintf(license, "This program is free software: you can redistribute it and/or modify\n");
                fprintf(license, "it under the terms of the GNU General Public License as published by\n");
                fprintf(license, "the Free Software Foundation, either version 3 of the License, or\n");
                fprintf(license, "(at your option) any later version.\n\n");
                fprintf(license, "This program is distributed in the hope that it will be useful,\n");
                fprintf(license, "but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                fprintf(license, "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
                fprintf(license, "GNU General Public License for more details.\n\n");
                fprintf(license, "You should have received a copy of the GNU General Public License\n");
                fprintf(license, "along with this program.  If not, see <http://www.gnu.org/licenses/>.");

                printf("Copyright (C) %d %s\n", date, name);
                printf("This program is free software: you can redistribute it and/or modify\n");
                printf("it under the terms of the GNU General Public License as published by\n");
                printf("the Free Software Foundation, either version 3 of the License, or\n");
                printf("(at your option) any later version.\n\n");
                printf("This program is distributed in the hope that it will be useful,\n");
                printf("but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                printf("MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
                printf("GNU General Public License for more details.\n\n");
                printf("You should have received a copy of the GNU General Public License\n");
                printf("along with this program.  If not, see <http://www.gnu.org/licenses/>.");

                break;
            }

        case 8:
            {
                fprintf(license, "Copyright (C) %d %s\n", date, name);
                fprintf(license, "Permission is hereby granted, free of charge, to any person obtaining a copy of this software and\n");
                fprintf(license, "associated documentation files (the \"Software\"), to deal in the Software without restriction,\n");
                fprintf(license, "including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,\n");
                fprintf(license, "and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do\n");
                fprintf(license, "so, subject to the following conditions:\n\n");
                fprintf(license, "The above copyright notice and this permission notice shall be included in all copies or\n");
                fprintf(license, "substantial portions of the Software.\n\n");
                fprintf(license, "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,\n");
                fprintf(license, "INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A\n");
                fprintf(license, "PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR\n");
                fprintf(license, "COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN\n");
                fprintf(license, "AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION\n");
                fprintf(license, "WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.");

                printf("Copyright (C) %d %s\n", date, name);
                printf("Permission is hereby granted, free of charge, to any person obtaining a copy of this software and\n");
                printf("associated documentation files (the \"Software\"), to deal in the Software without restriction,\n");
                printf("including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,\n");
                printf("and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do\n");
                printf("so, subject to the following conditions:\n\n");
                printf("The above copyright notice and this permission notice shall be included in all copies or\n");
                printf("substantial portions of the Software.\n\n");
                printf("THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,\n");
                printf("INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A\n");
                printf("PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR\n");
                printf("COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN\n");
                printf("AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION\n");
                printf("WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.");

                break;
            }

        case 9:
            {
                fprintf(license, "This Source Code Form is subject to the\n");
                fprintf(license, "terms of the Mozilla Public License, v.\n");
                fprintf(license, "2.0. If a copy of the MPL was not\n");
                fprintf(license, "distributed with this file, You can obtain\n");
                fprintf(license, "one at https://mozilla.org/MPL/2.0/.\n");

                printf("This Source Code Form is subject to the\n");
                printf("terms of the Mozilla Public License, v.\n");
                printf("2.0. If a copy of the MPL was not\n");
                printf("distributed with this file, You can obtain\n");
                printf("one at https://mozilla.org/MPL/2.0/.\n\n\n");
                printf("Would you like to add Exibhit B? :\n");
                printf("This Source Code Form is \"Incompatible\n");
                printf("With Secondary Licenses\", as defined by\n");
                printf("the Mozilla Public License, v. 2.0.\n");
                printf("1) Yes\n");
                printf("2) No\n");
                do
                {
                    scanf("%d",&choice);
                } while ((choice<1) || (choice>2));
                if (choice==1)
                {
                    fprintf(license, "\nThis Source Code Form is “Incompatible\n");
                    fprintf(license, "With Secondary Licenses”, as defined by\n");
                    fprintf(license, "the Mozilla Public License, v. 2.0.");
                }

                break;
            }

        case 10:
            {
                fprintf(license, "Copyright (C) %d %s\n", date, name);
                fprintf(license, "This library is free software; you can redistribute it and/or\n");
                fprintf(license, "modify it under the terms of the GNU Lesser General Public\n");
                fprintf(license, "License as published by the Free Software Foundation; either\n");
                fprintf(license, "version 2.1 of the License, or (at your option) any later version.\n\n");
                fprintf(license, "This library is distributed in the hope that it will be useful,\n");
                fprintf(license, "but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                fprintf(license, "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\n");
                fprintf(license, "Lesser General Public License for more details.\n\n");
                fprintf(license, "You should have received a copy of the GNU Lesser General Public\n");
                fprintf(license, "License along with this library; if not, write to the Free Software\n");
                fprintf(license, "Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA");

                printf("Copyright (C) %d %s\n", date, name);
                printf("This library is free software; you can redistribute it and/or\n");
                printf("modify it under the terms of the GNU Lesser General Public\n");
                printf("License as published by the Free Software Foundation; either\n");
                printf("version 2.1 of the License, or (at your option) any later version.\n\n");
                printf("This library is distributed in the hope that it will be useful,\n");
                printf("but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                printf("MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\n");
                printf("Lesser General Public License for more details.\n\n");
                printf("You should have received a copy of the GNU Lesser General Public\n");
                printf("License along with this library; if not, write to the Free Software\n");
                printf("Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA");

                break;
            }

        case 11:
            {
                fprintf(license, "Copyright (C) %d %s\n\n", date, name);
                fprintf(license, "This program is free software: you can redistribute it and/or modify\n");
                fprintf(license, "it under the terms of the GNU Lesser General Public License as published by\n");
                fprintf(license, "the Free Software Foundation, either version 3 of the License, or\n");
                fprintf(license, "(at your option) any later version.\n\n");
                fprintf(license, "This program is distributed in the hope that it will be useful,\n");
                fprintf(license, "but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                fprintf(license, "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
                fprintf(license, "GNU Lesser General Public License for more details.\n\n");
                fprintf(license, "You should have received a copy of the GNU Lesser General Public License\n");
                fprintf(license, "along with this program.  If not, see <http://www.gnu.org/licenses/>.");

                printf("Copyright (C) %d %s\n\n", date, name);
                printf("This program is free software: you can redistribute it and/or modify\n");
                printf("it under the terms of the GNU Lesser General Public License as published by\n");
                printf("the Free Software Foundation, either version 3 of the License, or\n");
                printf("(at your option) any later version.\n\n");
                printf("This program is distributed in the hope that it will be useful,\n");
                printf("but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                printf("MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
                printf("GNU Lesser General Public License for more details.\n\n");
                printf("You should have received a copy of the GNU Lesser General Public License\n");
                printf("along with this program.  If not, see <http://www.gnu.org/licenses/>.");

                break;
            }

        case 12:
            {
                fprintf(license, "This is free and unencumbered software released into the public domain.\n\n");
                fprintf(license, "Anyone is free to copy, modify, publish, use, compile, sell, or\n");
                fprintf(license, "distribute this software, either in source code form or as a compiled\n");
                fprintf(license, "binary, for any purpose, commercial or non-commercial, and by any\n");
                fprintf(license, "means.\n\n");
                fprintf(license, "In jurisdictions that recognize copyright laws, the author or authors\n");
                fprintf(license, "of this software dedicate any and all copyright interest in the\n");
                fprintf(license, "software to the public domain. We make this dedication for the benefit\n");
                fprintf(license, "of the public at large and to the detriment of our heirs and\n");
                fprintf(license, "successors. We intend this dedication to be an overt act of\n");
                fprintf(license, "relinquishment in perpetuity of all present and future rights to this\n");
                fprintf(license, "software under copyright law.\n\n");
                fprintf(license, "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND,\n");
                fprintf(license, "EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF\n");
                fprintf(license, "MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.\n");
                fprintf(license, "IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR\n");
                fprintf(license, "OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,\n");
                fprintf(license, "ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR\n");
                fprintf(license, "OTHER DEALINGS IN THE SOFTWARE.\n\n");
                fprintf(license, "For more information, please refer to <http://unlicense.org/>");

                printf("This is free and unencumbered software released into the public domain.\n\n");
                printf("Anyone is free to copy, modify, publish, use, compile, sell, or\n");
                printf("distribute this software, either in source code form or as a compiled\n");
                printf("binary, for any purpose, commercial or non-commercial, and by any\n");
                printf("means.\n\n");
                printf("In jurisdictions that recognize copyright laws, the author or authors\n");
                printf("of this software dedicate any and all copyright interest in the\n");
                printf("software to the public domain. We make this dedication for the benefit\n");
                printf("of the public at large and to the detriment of our heirs and\n");
                printf("successors. We intend this dedication to be an overt act of\n");
                printf("relinquishment in perpetuity of all present and future rights to this\n");
                printf("software under copyright law.\n\n");
                printf("THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND,\n");
                printf("EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF\n");
                printf("MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.\n");
                printf("IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR\n");
                printf("OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,\n");
                printf("ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR\n");
                printf("OTHER DEALINGS IN THE SOFTWARE.\n\n");
                printf("For more information, please refer to <http://unlicense.org/>");

                break;
            }

        case 13:
            {
                fprintf(license, "            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE\n");
                fprintf(license, "   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION\n\n");
                fprintf(license, "  0. You just DO WHAT THE FUCK YOU WANT TO.");

                printf("            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE\n");
                printf("   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION\n\n");
                printf("  0. You just DO WHAT THE FUCK YOU WANT TO.");

                break;
            }
    }

    printf("\n\nLicense.txt successfully generated.\n");
    printf("The program will now exit.");

    fclose(license);

    return 0;
}
