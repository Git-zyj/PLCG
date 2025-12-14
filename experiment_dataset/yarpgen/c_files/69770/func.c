/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69770
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
    var_20 = var_18;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (arr_3 [i_0 - 2] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [12])) < (((/* implicit */int) arr_1 [i_0]))))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_7))))), (min((var_0), (((/* implicit */unsigned int) arr_2 [i_2]))))));
                    arr_8 [i_0 - 2] |= ((/* implicit */unsigned long long int) var_3);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((signed char) (unsigned char)134));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) 10416938226358973551ULL))))))))));
                        arr_12 [i_2] [i_1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_14)), (var_13))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1])))))))) ? (18399671418187401170ULL) : (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_3] [i_0] [i_0])), (12023205540782199105ULL)))));
                    }
                    for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
                    {
                        var_25 ^= arr_5 [i_0];
                        arr_15 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) var_7);
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_26 += ((/* implicit */long long int) arr_4 [i_0 - 1]);
                        arr_20 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((int) (~(arr_14 [i_0 + 1] [i_5 + 2]))));
                    }
                    arr_21 [i_0] [(unsigned short)6] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_13 [i_0] [(unsigned short)1] [i_2] [i_2] [i_0 - 2]))))));
                }
                for (signed char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_28 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) ((unsigned long long int) arr_10 [i_6] [i_6] [i_1] [i_1] [i_0]))))));
                }
            }
        } 
    } 
}
