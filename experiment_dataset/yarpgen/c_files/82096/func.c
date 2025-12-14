/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82096
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_9))));
                    arr_10 [i_2] [i_1 - 3] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_14 &= ((/* implicit */unsigned long long int) 475489995U);
                        var_15 = ((/* implicit */_Bool) (-(arr_8 [i_0] [i_0] [i_0] [i_0])));
                        /* LoopSeq 4 */
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)58))))), (1039534130U)));
                            var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_12)) ? (arr_8 [i_1 - 2] [i_1 - 1] [i_2] [i_3]) : (arr_8 [i_1 - 1] [i_4 - 1] [i_4 + 1] [4LL]))), (((/* implicit */long long int) ((6576359451358019394LL) > (((/* implicit */long long int) ((/* implicit */int) max(((signed char)111), ((signed char)-2))))))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_18 &= ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0]);
                            arr_19 [3ULL] = max(((short)127), (((/* implicit */short) (signed char)-120)));
                            var_19 |= ((/* implicit */signed char) arr_5 [(_Bool)1] [i_3]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (arr_8 [i_1] [i_1 - 1] [i_1] [i_3]))))))) % ((~(((arr_1 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                            var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_14 [i_1 - 3] [6ULL] [i_1] [i_2] [i_1 - 1])) ? (-2178213951583610423LL) : (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) - (arr_17 [4LL] [i_0] [i_2]))))), (((/* implicit */long long int) var_6))));
                            arr_22 [i_0] [(signed char)9] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_1 - 1]);
                        }
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) -5487448025366829418LL);
                            var_23 &= var_5;
                        }
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / ((-(var_3))))))));
}
