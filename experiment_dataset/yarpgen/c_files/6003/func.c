/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6003
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)27569)), (var_6)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((int) min((arr_0 [i_0]), (((/* implicit */unsigned int) ((_Bool) var_7)))))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */int) var_9))))) ? ((~(arr_1 [i_0] [i_0]))) : (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((arr_0 [i_1 + 2]), (8388607U))))));
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0] [i_1 + 1])), (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (var_6) : (var_0)))));
                    var_16 &= ((/* implicit */int) var_3);
                    var_17 = ((/* implicit */signed char) min((((_Bool) var_8)), (min((arr_4 [i_0] [i_1 + 2]), (arr_4 [i_0] [i_1 + 1])))));
                    arr_6 [i_0] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) + (var_3))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) min((((/* implicit */short) var_9)), (arr_3 [i_3] [i_3])))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((unsigned short) 16ULL)), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1])) == (((/* implicit */int) (short)-28926))))))))));
    }
    for (int i_4 = 2; i_4 < 16; i_4 += 4) 
    {
        var_20 ^= (-(min((((((/* implicit */long long int) var_1)) ^ (9223372036854775798LL))), (((/* implicit */long long int) var_6)))));
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((signed char) min((arr_11 [i_4 + 2] [i_4]), (var_9))))), ((((_Bool)1) ? (((/* implicit */long long int) -134041179)) : (-7918394122609844007LL)))));
        /* LoopSeq 2 */
        for (short i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            arr_14 [i_4 + 1] [i_5 - 1] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_11 [i_4] [14LL]))))) - (arr_13 [i_4 + 1] [i_5 - 2])))) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (511ULL))))) : ((+((-(((/* implicit */int) arr_11 [i_4] [i_4]))))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (int i_7 = 2; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_22 += ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_18 [i_4 - 1] [i_5] [i_6 + 1] [i_7 + 2])) % (min((((/* implicit */unsigned long long int) (unsigned short)25789)), (9951887115526306028ULL)))));
                        arr_20 [i_4 - 2] [(short)3] [(short)3] [i_7] [(short)3] [i_7] = ((/* implicit */unsigned short) (+(var_1)));
                    }
                } 
            } 
            var_23 *= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4 + 2] [(unsigned char)9] [(short)16] [i_4])) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) var_8))))), (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)250)))))), (((/* implicit */unsigned long long int) min((((unsigned char) arr_10 [8] [i_4 + 2])), (((/* implicit */unsigned char) arr_12 [i_5])))))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_19 [i_4] [i_4 + 3] [i_5 - 1] [i_5 - 1]), (arr_19 [13ULL] [i_4 - 1] [i_5 - 1] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_5]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 23)) ? (var_7) : (((/* implicit */int) (unsigned short)37358))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_16 [i_4 + 1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5]))) * (4160749568U)))))));
        }
        for (long long int i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_13 [i_4 + 4] [i_8 + 1])))) * (((((/* implicit */unsigned int) ((/* implicit */int) (short)-28582))) ^ (1235359267U)))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))))));
            var_26 -= ((/* implicit */unsigned short) var_10);
        }
    }
}
