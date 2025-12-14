/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57857
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
    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((_Bool) (_Bool)1)))))));
    var_13 = ((/* implicit */signed char) ((((_Bool) ((long long int) 3316284115644297882LL))) ? (((long long int) (~(4190208)))) : (((/* implicit */long long int) (~(((int) -3576515218880041927LL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) var_7);
        var_15 -= (+(((/* implicit */int) arr_1 [i_0] [i_0 + 1])));
    }
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_6 [(unsigned char)0] [i_1] |= ((/* implicit */long long int) ((_Bool) 13331000229526369488ULL));
        arr_7 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)136))))) ? (-3576515218880041927LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)55)) ? (var_0) : (arr_5 [i_1]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 4) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_2 - 4])) : (((/* implicit */int) (_Bool)1))))));
        arr_11 [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(3957299474U)))) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) > (((/* implicit */int) (_Bool)0)))))));
        arr_12 [16] = ((/* implicit */long long int) (unsigned char)115);
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_17 [17] [i_2 - 1] [i_3] = ((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))));
            arr_18 [15LL] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)139))));
            /* LoopSeq 2 */
            for (int i_4 = 3; i_4 < 20; i_4 += 3) 
            {
                var_17 = ((/* implicit */long long int) ((arr_8 [i_2]) ? (((/* implicit */int) ((3752250822U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))) : (((((/* implicit */_Bool) (unsigned char)158)) ? (var_0) : (((/* implicit */int) (short)11269))))));
                var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (3996273587354868346LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6)))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-((-(var_7))))))));
                arr_21 [i_4] [(unsigned char)19] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (short)255))) ? (arr_19 [i_4 + 1] [i_4 - 3] [i_4 - 3]) : (((/* implicit */int) arr_16 [i_2 + 1]))));
            }
            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_20 = ((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (((/* implicit */int) (unsigned char)227)) : (arr_9 [i_2 - 3]));
                var_21 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)11938)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 1]))) : (-7264334841832738090LL)));
            }
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((var_3) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)14)) - (13))))))));
        }
        for (long long int i_6 = 4; i_6 < 19; i_6 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((arr_22 [16U] [16ULL] [i_6 - 1] [i_6]) <= (arr_22 [i_6] [i_6 - 4] [i_6 - 3] [i_6 - 1]))))));
            arr_27 [10] [7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)150))));
            var_24 |= ((/* implicit */long long int) ((arr_25 [i_2 - 4] [i_6 - 3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53598)))));
            var_25 = ((/* implicit */short) ((long long int) (short)25970));
        }
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (+(-1151913139))))));
    }
}
