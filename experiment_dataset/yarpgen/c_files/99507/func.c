/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99507
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) 1809077209U)))));
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)13294))))) < ((+(arr_0 [i_0])))));
        var_19 = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_20 |= ((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [i_1])), (min((((((/* implicit */int) arr_1 [i_1])) << (((arr_2 [(unsigned char)6] [i_1]) - (15762059261252732905ULL))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32750))) < (6373741590062657968ULL))))))));
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_1])) << (((/* implicit */int) arr_1 [i_1]))))))), (((unsigned long long int) 899837077U))));
        var_22 &= ((/* implicit */_Bool) ((((unsigned int) arr_2 [i_1] [i_1])) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_2 [i_1] [i_1]), (12073002483646893648ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52241)) << (((((/* implicit */int) (short)3710)) - (3699))))))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_6 [i_2] = ((/* implicit */_Bool) 12073002483646893647ULL);
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_4] [i_4])) << (((/* implicit */int) ((arr_10 [i_2] [i_4] [i_4 + 3] [i_3]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52246))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */long long int) arr_11 [i_2] [i_3] [i_4] [i_5] [i_3] [i_6]);
                                var_24 = ((/* implicit */int) (((~(4607182418800017408ULL))) < (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                                var_25 = ((/* implicit */short) ((unsigned short) ((_Bool) arr_14 [i_6] [i_5] [i_4] [i_3 - 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_2] = ((((/* implicit */unsigned long long int) arr_10 [8] [i_2] [i_2] [i_2])) == (arr_5 [i_2]));
        arr_20 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) << (((((unsigned int) (short)-32224)) - (4294935071U)))));
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            {
                arr_27 [i_8] = ((/* implicit */signed char) max((((2532562589U) << (((((/* implicit */int) arr_25 [i_8] [i_8] [i_7])) - (34332))))), (((/* implicit */unsigned int) max((arr_21 [i_7]), (arr_21 [i_8]))))));
                arr_28 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_21 [i_7]);
                var_26 |= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_25 [i_7] [i_7] [i_8])), (((1895790946U) << (((((/* implicit */int) arr_22 [i_7])) + (4746))))))) == (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_25 [i_7] [(short)7] [i_7])) ^ (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32767), ((short)32))))) ^ (max((((/* implicit */unsigned long long int) arr_29 [i_8] [i_8] [i_9] [i_7])), (arr_24 [i_7])))));
                    var_28 -= ((/* implicit */signed char) arr_22 [i_8]);
                }
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) (short)-3343);
                    arr_35 [(unsigned char)6] = ((/* implicit */unsigned char) (+(((int) ((12073002483646893641ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7] [(short)10] [(short)10]))))))));
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (unsigned char)163))));
                    var_31 &= ((((/* implicit */int) (unsigned short)50124)) << (((9223372036854775807LL) - (9223372036854775804LL))));
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)13293)))))));
                    var_33 = ((/* implicit */_Bool) ((int) (unsigned short)35522));
                }
            }
        } 
    } 
}
