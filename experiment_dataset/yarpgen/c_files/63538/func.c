/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63538
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) (+(arr_2 [i_0] [(short)4])));
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_12 ^= ((/* implicit */unsigned long long int) 30);
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                var_13 = ((/* implicit */long long int) 65535);
                var_14 |= 1970324836974592LL;
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 4]))));
                var_16 = ((/* implicit */unsigned short) arr_1 [(signed char)10]);
            }
            var_17 = ((/* implicit */unsigned int) var_8);
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_18 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */long long int) arr_2 [i_3] [i_3])) : (var_4))))))));
            arr_12 [21LL] [21LL] [21LL] = ((/* implicit */unsigned int) (unsigned short)12);
            arr_13 [i_3] = ((/* implicit */_Bool) arr_10 [i_0]);
            arr_14 [i_0] [22LL] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) max((max(((~(6862516284373775352LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 571832148U))))))), (((/* implicit */long long int) (_Bool)1))));
            var_20 |= ((/* implicit */signed char) ((unsigned long long int) (-(((((/* implicit */unsigned int) arr_6 [i_4] [i_4] [i_0])) - (arr_2 [(unsigned short)4] [i_0]))))));
        }
        for (unsigned short i_5 = 4; i_5 < 23; i_5 += 1) 
        {
            var_21 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (int i_6 = 1; i_6 < 24; i_6 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) min((((unsigned int) var_7)), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_15 [i_0] [i_5] [i_6])))) > (((/* implicit */int) arr_3 [(short)9] [i_5])))))));
                var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [6] [i_6])) ? ((+((-(var_4))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_0] [i_5] [i_0])))))));
            }
            var_24 &= ((/* implicit */int) var_6);
        }
        var_25 = ((/* implicit */short) (~(var_4)));
    }
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        arr_27 [i_7] [i_7] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_7] [i_7]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7])))))));
        arr_28 [i_7] = ((/* implicit */long long int) (_Bool)1);
        var_26 = max((511LL), (((/* implicit */long long int) var_0)));
    }
    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) * (((/* implicit */int) var_2)))))));
    var_28 += ((/* implicit */unsigned short) min((((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))))), (((/* implicit */unsigned long long int) (~(3723135148U))))));
}
