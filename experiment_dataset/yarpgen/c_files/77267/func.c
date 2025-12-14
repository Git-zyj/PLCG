/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77267
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
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 7; i_2 += 3) /* same iter space */
                {
                    var_13 = ((/* implicit */signed char) (~(arr_0 [i_0] [i_2])));
                    arr_8 [i_1] = ((/* implicit */_Bool) (unsigned short)511);
                    arr_9 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (9227549516397586213ULL)));
                    var_14 = ((/* implicit */short) ((arr_6 [i_0 + 1] [i_1] [i_2 - 1]) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_2]))));
                }
                for (unsigned short i_3 = 2; i_3 < 7; i_3 += 3) /* same iter space */
                {
                    var_15 *= ((/* implicit */unsigned short) arr_10 [i_0 - 1]);
                    arr_13 [i_0 - 1] [i_1] [i_3] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)27083)) * (((/* implicit */int) ((_Bool) (signed char)-57)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_0])), ((+(((/* implicit */int) arr_10 [i_0]))))))) : (arr_4 [(signed char)10])));
                }
                for (unsigned short i_4 = 2; i_4 < 7; i_4 += 3) /* same iter space */
                {
                    var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 - 2] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_12 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4])) : (((/* implicit */int) arr_12 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4]))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0] [i_0] [(_Bool)1]) : (((/* implicit */int) (short)22906)))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) 1067608815)) && (((/* implicit */_Bool) arr_3 [i_1] [i_4]))))))));
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_4])) << ((-(((/* implicit */int) arr_6 [i_4] [i_1] [i_0]))))))) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) ((_Bool) arr_15 [i_4 + 3] [i_4 + 4]))));
                    arr_16 [i_1] = ((/* implicit */int) max((((unsigned long long int) min((5546445883263373752ULL), (((/* implicit */unsigned long long int) -1287722574617075408LL))))), (max(((~(var_10))), (((/* implicit */unsigned long long int) max((arr_3 [i_1] [i_4]), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1])))))))));
                    arr_17 [i_0] [i_0] [i_1] [(unsigned short)3] = ((/* implicit */unsigned int) (short)-22890);
                }
                var_18 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-22874)) >= (((/* implicit */int) (_Bool)0)))))) <= (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -17LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_7 [i_0] [2LL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) : (-1287722574617075408LL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_4);
    var_20 = ((/* implicit */_Bool) max((10313503430535517272ULL), (((/* implicit */unsigned long long int) (unsigned short)37515))));
}
