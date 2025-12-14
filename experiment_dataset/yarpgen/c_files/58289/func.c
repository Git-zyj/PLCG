/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58289
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (_Bool)0))));
    var_13 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned long long int) var_0))))) && (((/* implicit */_Bool) ((var_0) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_8))))))))));
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), (var_7)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) min(((-(arr_2 [i_0]))), (((/* implicit */long long int) var_1))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) || ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_15 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (((unsigned long long int) var_6)))) == ((-(((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_0 [i_1])))))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) min((((_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))), (((_Bool) ((((/* implicit */int) var_6)) % (var_1))))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_10))))) - (((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) var_1)) : (max((arr_0 [i_1]), (arr_0 [i_1])))));
        }
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_16 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) (signed char)43))), (arr_14 [i_3] [i_3] [i_3])));
                var_18 = arr_15 [i_3] [(_Bool)1] [(_Bool)1];
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)-15)))), (((int) var_2))))) ? (((int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (unsigned char)221)))))));
            }
        } 
    } 
}
