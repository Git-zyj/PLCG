/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80665
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_6))))))) << (max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))))) : (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_6))))))) << (((max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_0 [i_0] [i_0])))))) - (99))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_4 [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_13 -= ((/* implicit */_Bool) (~(arr_1 [i_0])));
                        var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_2 + 1] [i_3] [i_0]))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_0 + 1] [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */short) var_4);
                            arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [(_Bool)1] [i_0] = ((((/* implicit */int) arr_7 [i_2 - 1] [i_3 - 1])) == (((/* implicit */int) (_Bool)1)));
                            arr_15 [i_0] [(_Bool)1] [i_2 + 1] [i_3] [i_0] [i_4] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                            var_16 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0] [3LL]);
                            arr_18 [(_Bool)1] [(signed char)0] [i_0] [i_3 - 1] [(unsigned char)11] = ((/* implicit */short) 6149770400150904368LL);
                        }
                    }
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 22; i_7 += 4) 
            {
                var_17 -= ((/* implicit */unsigned short) (~(arr_21 [i_0 + 1] [i_0 + 1] [i_7 + 2] [i_7 + 3])));
                arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                var_18 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 + 1] [(unsigned short)21])) % (((/* implicit */int) arr_8 [i_0 + 1] [i_7 - 2] [i_7] [i_7 + 1] [i_7]))))), (max((((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_0 + 1])), (5017180636871517044ULL)))));
                arr_25 [i_0] [i_0 + 1] [i_0] [i_7 + 1] = ((/* implicit */long long int) min((max((((/* implicit */int) arr_12 [i_7 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1])), ((-(((/* implicit */int) arr_20 [i_0] [i_6] [i_7])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_12 [i_0] [i_6] [i_6] [i_0]))))) ? (var_7) : (((/* implicit */int) arr_7 [24] [(signed char)8]))))));
            }
            var_19 = ((/* implicit */long long int) (+((-(((/* implicit */int) var_2))))));
        }
    }
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
}
