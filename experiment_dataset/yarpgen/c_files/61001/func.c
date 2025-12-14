/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61001
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (5LL))), (((/* implicit */long long int) arr_2 [i_0]))))) ? (max((4751067587492168092LL), (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_14 [i_3] [i_2] [(unsigned char)2] [i_3] |= ((/* implicit */unsigned short) ((((((long long int) arr_13 [i_3] [i_2] [i_1] [i_1] [i_0])) > (((((/* implicit */_Bool) var_8)) ? (-4751067587492168093LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) arr_2 [i_3])) ? (var_13) : (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -24LL)) ? (((/* implicit */unsigned long long int) 901267868U)) : (var_13))))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) arr_3 [i_0])))));
                        arr_16 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */signed char) (+(var_9)));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        arr_20 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) var_12)), (min((((/* implicit */long long int) 1484284744U)), (4751067587492168092LL))))), (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4] [i_4 + 1])) : (var_1))))));
                        arr_21 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_12)), ((short)16028)))))))));
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_4] [(signed char)8] = ((/* implicit */short) arr_5 [i_0] [i_0]);
                        arr_23 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((long long int) (short)0));
                        arr_24 [i_1] [i_4] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_11)) & (((/* implicit */int) arr_17 [i_4])))), (((((/* implicit */int) (unsigned char)6)) & (((/* implicit */int) (short)6672))))));
                    }
                    arr_25 [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)56)) ? (-7904912694094688540LL) : (((/* implicit */long long int) ((/* implicit */int) (short)2402)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_28 [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_0]))))), (6463780281140522340ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)11)))))));
            arr_29 [i_5] = ((/* implicit */short) (+(2409186052928684066ULL)));
        }
    }
    var_14 |= ((/* implicit */long long int) 2U);
    var_15 = ((/* implicit */unsigned char) (_Bool)1);
}
