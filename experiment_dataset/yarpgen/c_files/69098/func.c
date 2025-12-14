/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69098
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
    var_10 = ((/* implicit */unsigned char) var_7);
    var_11 &= ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) var_4);
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (12152990846454283146ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18791)) / (((/* implicit */int) (unsigned short)14)))))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((_Bool) var_3))));
        arr_4 [i_1] = ((/* implicit */unsigned char) var_5);
        var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_3 [(signed char)2]))))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned short) var_9)))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)27052)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49419))) : (arr_6 [i_1] [i_2]))) : (((/* implicit */unsigned int) var_5)))))))));
            arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (unsigned short)65521)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16116)))))));
        }
        for (int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (1721820684U)));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                arr_13 [i_1] [i_1] = ((/* implicit */long long int) 11274528575445498106ULL);
                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
            }
            arr_14 [i_1] = var_6;
            var_18 = ((/* implicit */_Bool) (signed char)-70);
        }
    }
    var_19 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_3)) ^ ((-(((/* implicit */int) var_3)))))));
}
