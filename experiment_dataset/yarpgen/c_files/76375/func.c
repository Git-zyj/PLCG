/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76375
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
    var_10 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) 4294967295U)), (arr_5 [i_0] [i_1]))))));
                var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)34)) + (((/* implicit */int) (unsigned char)34))))));
                var_13 = ((/* implicit */int) var_2);
                var_14 *= ((/* implicit */long long int) (+(((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */unsigned long long int) max((2186168477500870595LL), (((/* implicit */long long int) (unsigned short)5188))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_3)), (var_8))), (var_4)));
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) -2186168477500870601LL)), (((unsigned long long int) (signed char)127)))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_5 [i_2] [i_2]))), ((+(12ULL)))))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) != (var_6)))), (((((/* implicit */_Bool) 3592829878U)) ? (-7388018217870004423LL) : (((/* implicit */long long int) -572803696)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 -= (((!((!(((/* implicit */_Bool) (unsigned char)198)))))) && (((((var_3) && (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) var_0)))));
                    var_19 += min((16692498997056839396ULL), (((/* implicit */unsigned long long int) arr_6 [(signed char)11])));
                }
            } 
        } 
    }
}
