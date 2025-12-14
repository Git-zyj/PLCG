/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62087
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((min((var_2), (((/* implicit */long long int) var_10)))) - (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                var_18 |= ((/* implicit */unsigned int) arr_3 [i_0]);
                arr_6 [i_0] [i_1 - 1] = min((((/* implicit */short) (unsigned char)151)), (var_12));
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    var_19 += ((/* implicit */unsigned short) (unsigned char)110);
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), ((signed char)-27)));
                        arr_13 [i_3 - 2] = ((/* implicit */short) (unsigned short)5);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7466296630575408326LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [4LL] [i_1 + 1] [i_2] [i_1 + 1] [i_4]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 4294967271U)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (7466296630575408328LL)))))));
                        var_22 = (short)15578;
                        var_23 += ((/* implicit */short) arr_9 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1]);
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((signed char) (signed char)31)))));
                            var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_3 [i_0]))) ? (((/* implicit */int) (unsigned char)215)) : (((((/* implicit */int) (short)-4158)) ^ (((/* implicit */int) arr_14 [i_5] [(signed char)5] [i_4] [(unsigned char)3] [i_4] [i_1 + 1]))))));
                            arr_19 [(signed char)9] [(signed char)9] [i_2 - 3] [(short)3] [i_5] = ((/* implicit */signed char) ((var_13) >= (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)7136))))), ((+(((/* implicit */int) (unsigned short)48983)))))))));
                            arr_20 [i_0] [i_1] [(unsigned char)1] = ((/* implicit */long long int) (signed char)14);
                        }
                    }
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) var_1);
}
