/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71929
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
    var_13 = var_5;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((int) 743190250908132139LL)), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */long long int) var_4)), ((-(743190250908132139LL))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            var_14 &= min(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (8094357602584099589ULL))))), (min((((((/* implicit */_Bool) 8094357602584099607ULL)) ? (10352386471125452021ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 1] [6ULL] [i_0]))))), (((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_1 + 3] [i_1 + 2])))));
            var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_1))))) / (7866364663099279829LL)));
        }
        arr_9 [i_0] = (!(((/* implicit */_Bool) max((-1360031610909383511LL), (((/* implicit */long long int) arr_5 [i_0] [i_0]))))));
        arr_10 [i_0] [i_0] &= ((/* implicit */unsigned long long int) var_1);
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_16 = min((((unsigned long long int) 10352386471125452042ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (-8505410891786734502LL) : (743190250908132132LL)))));
                var_17 *= ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (unsigned char)224))))), (((unsigned long long int) var_12)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((arr_13 [i_3] [i_2] [i_2]), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_2]))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_7);
    var_19 = ((/* implicit */int) var_5);
}
