/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8143
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
    var_12 = min((((/* implicit */unsigned long long int) -1205710058)), (6341746732766913679ULL));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-50)) + (((/* implicit */int) (unsigned short)19555))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((6341746732766913679ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2]))))), (arr_6 [i_2 - 2]))))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_1 + 3] [i_2])))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)11522)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) (short)12304)) ^ (((/* implicit */int) (signed char)-13))))));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_1 - 1] [i_1] [i_2 + 2] [i_1] [i_1] [i_2 + 1]))) && (((/* implicit */_Bool) min((arr_7 [i_1 - 1] [i_1] [i_2 + 1] [i_3]), (arr_10 [i_1 + 3] [i_1 + 3] [i_2 - 2] [i_3] [i_0] [i_3])))))))));
                    }
                    for (signed char i_4 = 3; i_4 < 18; i_4 += 3) 
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_1] [i_1 - 1] [i_2] = ((/* implicit */short) var_3);
                        arr_17 [i_0] [(signed char)3] [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (1205710045) : (((/* implicit */int) var_0))))) % (((unsigned int) (signed char)123))))) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (max((max((16174951268241898986ULL), (8268048151417456589ULL))), (((/* implicit */unsigned long long int) ((-589182122) - (((/* implicit */int) arr_7 [i_4] [i_2] [i_0] [i_0])))))))));
                        arr_18 [(signed char)17] [i_1] [i_1] [i_2 + 2] [i_2] [i_1] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_11 [i_2 + 2] [i_4 - 3] [i_2] [i_4] [i_2])))), (65535)));
                        arr_19 [i_4] [i_2 + 2] [i_1] [i_1] [(unsigned short)13] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (short)-11553)), (arr_6 [i_1 - 1]))) <= ((~(arr_6 [i_1 + 2])))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) ((((-65544) == (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5 + 1])))) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5 - 2] [i_5 - 1])) : ((~(((/* implicit */int) arr_7 [i_5 - 1] [i_5] [i_5] [i_5 + 1]))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_5 - 2] [i_5] [i_5] [i_5])) ? ((~(((/* implicit */int) arr_4 [i_1])))) : ((~(((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) > (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) ((_Bool) var_0)))));
                        var_17 &= ((/* implicit */short) var_4);
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)255);
                        arr_26 [i_6] [i_2 + 2] [i_1] [i_0] = ((/* implicit */long long int) arr_12 [i_0] [(signed char)14] [(signed char)14] [i_6 - 2]);
                    }
                    arr_27 [i_0] [i_1] [i_1 + 2] [i_1 + 3] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 3])) % ((-(((/* implicit */int) var_11))))))) ? (((/* implicit */int) arr_14 [i_0] [i_1] [(unsigned char)18] [i_2] [i_2])) : ((((((-(((/* implicit */int) (signed char)13)))) + (2147483647))) << ((((+(arr_23 [i_0] [i_1]))) - (14819544643222597372ULL))))));
                    var_18 = (!(((/* implicit */_Bool) ((int) 0))));
                }
            } 
        } 
    } 
}
