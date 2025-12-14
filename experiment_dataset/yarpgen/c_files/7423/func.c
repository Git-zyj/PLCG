/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7423
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_1 - 3] [i_2]))))) : (arr_6 [i_0] [i_1 - 1])));
                var_12 = ((/* implicit */unsigned int) (~(3529557667240706018LL)));
                var_13 = ((/* implicit */long long int) ((((arr_5 [i_0] [i_1] [i_2]) ? (-3529557667240706019LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)36))))) != (((/* implicit */long long int) ((arr_2 [i_0]) ? (4294967295U) : (var_0))))));
                var_14 = ((/* implicit */unsigned int) (unsigned short)0);
                var_15 += ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
            }
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (short)1111)))))));
        }
        for (long long int i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */short) ((_Bool) (short)32767));
            var_18 = ((((/* implicit */_Bool) 1907795820U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 - 1]))) : (arr_9 [i_3] [i_3 - 1]));
            var_19 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_5))))));
        }
        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((_Bool) 7298878382530179963ULL)))));
            arr_14 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (short)1111))) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)4849)) <= (((/* implicit */int) arr_13 [i_0] [i_4] [i_4])))))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) (signed char)81)))));
        }
        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)65535))))) ? (((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_0] [i_0])))) : ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (_Bool)1))));
        var_24 *= ((/* implicit */unsigned char) ((_Bool) var_3));
    }
    var_25 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-72))))))) * (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65535)) || (var_10))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (_Bool)1))))))))));
}
