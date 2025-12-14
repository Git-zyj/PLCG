/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65686
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~((((_Bool)1) ? (min((var_3), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((int) var_3))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_4 [i_0 - 1])))))))) ? (((((/* implicit */_Bool) min(((signed char)-59), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */_Bool) var_6)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) 809055685))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_9 [i_0] = min((((/* implicit */unsigned int) arr_0 [i_1])), (arr_1 [i_0]));
                        arr_10 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((var_9) ? (((/* implicit */long long int) 0U)) : (arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [11U]))) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2])))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0 - 1]))))));
                    }
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_18 -= ((/* implicit */unsigned int) ((((arr_7 [i_0] [i_0] [i_0 - 1] [i_2 + 1]) ? (((/* implicit */int) arr_7 [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_2 + 2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1] [i_2 + 2])))) < (((arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_2 - 2]) ? (((/* implicit */int) arr_7 [i_0] [(signed char)11] [i_0 - 1] [i_2 - 1])) : (847052896)))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((/* implicit */signed char) min((((_Bool) var_10)), (arr_4 [i_2 - 2])))), (((signed char) var_8)))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_16 [i_2] [i_1] [2] [i_2] [i_0] = ((/* implicit */int) (~(((long long int) arr_8 [i_2 + 3] [i_2 + 3] [2U] [i_2 + 3] [i_0 + 3] [i_0 + 3]))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (((_Bool)1) ? (min((((/* implicit */unsigned int) (signed char)-9)), (arr_1 [i_1]))) : (min((((/* implicit */unsigned int) var_8)), (arr_13 [i_0 + 1] [i_1] [i_2 - 1] [i_0 + 3] [i_6 + 2]))))))));
                            arr_19 [i_0 + 2] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0 + 2]))) ? (((int) arr_7 [12U] [i_0 - 1] [i_0] [i_0 + 1])) : ((~(((/* implicit */int) arr_4 [i_0 + 1]))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_1] [i_0 + 1])), ((-(2823160359U)))))))))));
                            arr_20 [i_0] [i_0] [i_0 + 1] [4U] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_0] [i_1] [i_1] [i_0])) ? (4225086396U) : (arr_2 [i_0 - 1] [i_0])))) ? ((~(arr_13 [i_6] [i_5] [i_2] [i_1] [i_0]))) : ((~(1U)))))) ? (((((_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)115)) ? (var_3) : (3556728095609144441LL))) : (min((-6134523993055964036LL), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) (~(-980106854))))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            var_22 -= ((/* implicit */signed char) ((int) (~(5462558879088568649LL))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((arr_1 [10LL]) / (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) != (9223372036854775807LL))))));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) 2110170190U))));
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    {
                        var_25 += ((/* implicit */int) arr_0 [i_8]);
                        arr_28 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                        arr_29 [4LL] [1LL] [i_0] [i_9] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    {
                        arr_36 [i_0] = max((((/* implicit */long long int) var_2)), (min((((/* implicit */long long int) (-(var_11)))), (1292967017697270201LL))));
                        var_26 -= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_15)))))))));
                    }
                } 
            } 
            var_27 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((int) var_15))))) ^ (((long long int) ((((/* implicit */_Bool) arr_0 [6U])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_8)))))));
            arr_37 [i_0] [i_10] [i_10] = ((/* implicit */unsigned int) ((_Bool) 511LL));
        }
    }
}
