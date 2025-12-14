/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73626
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
    var_20 = ((/* implicit */unsigned long long int) 1145839567295730599LL);
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned char) 4063708043U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_22 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 11514179868195861777ULL))));
                var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) : (var_6)));
                arr_5 [i_0] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_17)), (((short) arr_0 [i_1])))))) == (137522469U)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) max((var_24), (((unsigned int) ((((/* implicit */_Bool) (short)-11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_18))))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2] [i_3])) & (((var_1) ? (((/* implicit */int) arr_9 [i_3] [(unsigned char)8] [i_3])) : (((/* implicit */int) (_Bool)1))))));
        }
        for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            arr_13 [4ULL] &= ((/* implicit */long long int) (~(((/* implicit */int) var_17))));
            var_26 *= (-(arr_11 [i_4 + 1] [i_2 - 1]));
        }
        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            arr_18 [i_2] [i_2 - 1] [i_2] = ((/* implicit */long long int) (!(((18204735042211156853ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52679)))))));
            var_27 = ((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-7852911804328851561LL)))));
            var_28 -= var_2;
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                arr_23 [i_2] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)23479))) : (arr_6 [i_2] [i_7]))));
                arr_24 [i_2] = ((/* implicit */long long int) (unsigned short)7);
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_29 [i_2] [i_7] [i_6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_6] [i_7])))) : ((+(536870911LL)))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_2 - 1] [i_7] [i_7 - 1])) ^ (((/* implicit */int) var_14)))))));
                    arr_30 [i_2] [(unsigned char)8] [i_6] [i_6] [(signed char)10] [i_8] |= ((/* implicit */signed char) arr_17 [i_2 - 1]);
                    arr_31 [i_2] [i_2] [i_7 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 536870901LL))));
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (short)11)) ? (8796901575916552348ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65513)))));
                }
            }
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 - 1])))))) == (((long long int) (_Bool)0))));
        }
        for (short i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            arr_34 [i_2] [i_2] = ((/* implicit */unsigned short) 8191LL);
            arr_35 [i_2] [i_2] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16384)) & (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)21)) == (((/* implicit */int) var_17)))))) : (((unsigned long long int) var_3))));
            var_32 = (-(arr_33 [i_2] [i_9]));
        }
        arr_36 [i_2] [i_2] = (~(((/* implicit */int) arr_1 [i_2])));
    }
}
