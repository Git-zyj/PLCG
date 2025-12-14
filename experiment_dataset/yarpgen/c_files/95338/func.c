/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95338
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
    var_12 = ((/* implicit */unsigned long long int) var_4);
    var_13 = (+(((((/* implicit */int) var_10)) << ((((((((-2147483647 - 1)) - (-2147483627))) + (50))) - (18))))));
    var_14 = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))) ? (min(((+(((/* implicit */int) (short)-28197)))), ((~(-1290357512))))) : ((~(-54525121))));
    var_15 = ((/* implicit */unsigned short) 4193792);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_4 [i_1]))))));
                arr_6 [i_0] [15] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                var_17 = ((/* implicit */short) (~((-(arr_5 [i_0] [i_1] [9ULL])))));
            }
            var_18 = ((((/* implicit */_Bool) ((unsigned short) 2147483647))) ? (((/* implicit */int) arr_4 [i_0])) : ((+(((/* implicit */int) var_10)))));
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!((!(((/* implicit */_Bool) (-2147483647 - 1))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                var_20 ^= (!(((/* implicit */_Bool) 4)));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(0)))) && (((/* implicit */_Bool) 491979566))));
            }
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-17)))) ? ((~(((/* implicit */int) (unsigned short)57907)))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
        }
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_23 *= ((/* implicit */unsigned long long int) (_Bool)0);
            var_24 = 905401681;
            var_25 = ((((8458917141147267511ULL) == (var_1))) ? (arr_1 [i_0]) : (((int) arr_9 [15] [i_0] [i_5] [i_0])));
            arr_14 [(_Bool)1] = ((/* implicit */int) ((unsigned char) ((unsigned long long int) var_7)));
        }
        var_26 = (~(((/* implicit */int) (!(((/* implicit */_Bool) 14921828910790207670ULL))))));
        arr_15 [i_0] [i_0] = (~(((((/* implicit */_Bool) -1804233666)) ? (692002930) : (5))));
    }
}
