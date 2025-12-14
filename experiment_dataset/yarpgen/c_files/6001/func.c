/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6001
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) arr_1 [i_0]);
        var_11 = ((/* implicit */long long int) (~(((2646874674893363223ULL) / (11ULL)))));
        var_12 = ((/* implicit */short) 18446744073709551595ULL);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((((~(6921505574365531367ULL))) | (arr_0 [i_0]))) : (((unsigned long long int) arr_2 [i_0 + 1]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_14 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((max((7054003689994830071LL), (-2645662220251674700LL))) >> (((((((/* implicit */int) arr_4 [i_1] [i_1])) & (((/* implicit */int) arr_4 [i_1] [i_1])))) - (16913)))))) : (((/* implicit */unsigned long long int) ((max((7054003689994830071LL), (-2645662220251674700LL))) >> (((((((((/* implicit */int) arr_4 [i_1] [i_1])) & (((/* implicit */int) arr_4 [i_1] [i_1])))) - (16913))) + (4204))))));
        var_15 = max(((~(arr_2 [i_1]))), (var_5));
        var_16 ^= max((((/* implicit */unsigned long long int) ((var_3) != (arr_0 [12ULL])))), (((unsigned long long int) arr_4 [10ULL] [10ULL])));
    }
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((var_5) & (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) 2645662220251674700LL)))))))) == (var_0)));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_3])))))) ? (((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_6 [i_4]) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))) ? (arr_13 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) -2645662220251674700LL)), (1353609960559028209ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_5 [i_3]))))))))))));
                    var_19 = ((/* implicit */long long int) (((+((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) & (((/* implicit */unsigned long long int) (+(arr_5 [i_4]))))));
                    var_20 = arr_8 [i_2] [i_3];
                }
            } 
        } 
    } 
}
