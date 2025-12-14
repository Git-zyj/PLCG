/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71739
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
    var_15 &= var_6;
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_16 = ((long long int) ((((/* implicit */int) (short)-14504)) >= (((/* implicit */int) (unsigned short)33062))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (short i_3 = 4; i_3 < 8; i_3 += 4) 
                {
                    {
                        arr_8 [i_2] [i_1] [i_1] [i_1] [i_2 - 1] [i_3 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_1), (((var_13) > (var_4)))))), (((((int) var_1)) * (min((((/* implicit */int) var_8)), (var_9)))))));
                        var_17 -= ((/* implicit */int) ((long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_0))))), (((long long int) var_3)))));
                        arr_9 [i_0] [i_0] [i_0] [(unsigned short)6] [i_3] [i_0] &= ((/* implicit */long long int) var_13);
                        arr_10 [i_0] [i_1] [i_2] [(unsigned short)8] = ((/* implicit */unsigned short) ((min((((var_9) | (((/* implicit */int) var_3)))), (((var_11) ^ (((/* implicit */int) var_1)))))) & (((/* implicit */int) ((((var_9) >> (((var_11) + (490099675))))) < (((/* implicit */int) ((var_13) != (((/* implicit */int) var_3))))))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            var_18 = ((int) ((((((/* implicit */int) (unsigned short)32479)) * (0))) >> (((((long long int) var_5)) - (37691815LL)))));
                            arr_13 [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)35501));
                        }
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((long long int) ((int) var_11))) * (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            arr_16 [i_2] [i_0] [i_0 - 1] [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_6))) <= (((((((/* implicit */int) var_1)) + (((/* implicit */int) var_3)))) + (((/* implicit */int) var_6))))));
                            var_20 &= ((/* implicit */unsigned char) ((((unsigned int) ((11207962202739540904ULL) >= (11207962202739540904ULL)))) > (((((unsigned int) var_9)) ^ (((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_14) - (2089870698))))))))));
                            arr_17 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) var_12))), (((int) (short)30612))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((unsigned long long int) var_7));
        arr_21 [i_6] = ((/* implicit */int) ((_Bool) ((var_2) && (var_1))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)52892)) - (((/* implicit */int) (unsigned short)32473)))), (((var_4) - (((/* implicit */int) var_3))))))) - (min((var_10), (((9903623100672946288ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65506)))))))));
    var_23 = ((/* implicit */int) ((min((((/* implicit */long long int) var_14)), (((long long int) var_3)))) - (((/* implicit */long long int) ((((/* implicit */int) ((short) var_5))) - (var_13))))));
}
