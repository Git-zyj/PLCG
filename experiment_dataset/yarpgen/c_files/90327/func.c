/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90327
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
    var_10 = ((/* implicit */unsigned short) var_4);
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~(5229485720511230776LL)))) ? (((((/* implicit */_Bool) 1897442761)) ? (32767LL) : (-32768LL))) : ((-(-32765LL)))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */long long int) var_1)) : (var_7)))) : ((~(var_4)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_1]);
                        var_14 *= (~(arr_10 [i_0] [i_0] [i_2] [i_0]));
                        var_15 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_16 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0]);
                    var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)62)))))))));
                    var_18 *= ((/* implicit */unsigned short) (+((+(arr_9 [i_0] [i_1] [i_1] [i_2])))));
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -32765LL)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)244))))));
                }
            } 
        } 
    } 
}
