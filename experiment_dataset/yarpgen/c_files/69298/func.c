/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69298
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
    var_10 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */int) var_7)), (var_9))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_2))))) == (var_3)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_11 -= ((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_4 [i_1])), (9223369837831520256ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0 - 1]) >= (arr_4 [i_0 - 1])))))));
            arr_7 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (((_Bool)1) ? (2434938889717048870LL) : (arr_3 [i_0] [i_1 + 1])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) | (((/* implicit */unsigned long long int) -2434938889717048870LL)))))) >= (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) >= (2434938889717048853LL)))), (max((arr_9 [i_3]), (var_1)))));
                arr_12 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_5)) >= (((((/* implicit */_Bool) var_4)) ? (min((arr_9 [i_2]), (((/* implicit */unsigned long long int) var_6)))) : (arr_1 [i_2])))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((((unsigned int) (+(((/* implicit */int) (unsigned char)10))))), (((/* implicit */unsigned int) var_2))));
}
