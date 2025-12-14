/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56633
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (((~(arr_0 [i_0]))) <= (((((/* implicit */_Bool) var_1)) ? (605408556) : (arr_0 [i_0])))));
        var_13 = ((/* implicit */long long int) arr_0 [11LL]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((int) arr_1 [i_1]));
        var_14 = ((/* implicit */short) var_1);
        var_15 = ((/* implicit */short) var_2);
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] [2LL] = ((/* implicit */signed char) (((!(arr_5 [i_2]))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((_Bool) arr_2 [i_2]))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                {
                    arr_17 [(_Bool)1] [i_4] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)247)))))));
                    arr_18 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > ((~(min((3630420087U), (((/* implicit */unsigned int) -1187946575))))))));
                    var_16 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) & (664547214U)))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 664547220U)) ? (11212614402863437498ULL) : (((/* implicit */unsigned long long int) 3630420081U)))))));
        var_18 = ((/* implicit */int) ((((_Bool) ((short) arr_14 [0LL] [i_2] [i_2] [12]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_12 [i_2])) : (664547220U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [2LL]))) : (arr_14 [i_2] [i_2] [i_2] [i_2])))) : (11212614402863437498ULL)));
    }
    var_19 = ((/* implicit */short) var_11);
    var_20 = ((/* implicit */short) var_5);
}
