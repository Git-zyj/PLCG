/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70361
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
    var_12 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((var_2) && (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) << (max((((/* implicit */unsigned long long int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (min((12026185145558072041ULL), (((/* implicit */unsigned long long int) var_0))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [12ULL]))) | (12026185145558072027ULL)))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (12026185145558072018ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [14LL])))) : (((/* implicit */unsigned long long int) ((8388544) << (((6420558928151479597ULL) - (6420558928151479595ULL)))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_2 [0])))) <= (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [(unsigned char)14]))))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_15 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_4 [i_1]) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (arr_5 [i_1] [i_1]))) < (((((/* implicit */int) arr_2 [14])) << (((((/* implicit */int) arr_0 [i_1] [i_1])) - (73))))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2378)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [5LL]))))) ? (6420558928151479597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) arr_2 [2ULL])))))))));
        arr_6 [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12026185145558072018ULL)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_2 [0]))))) ? (6420558928151479574ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) arr_4 [i_1])) : (arr_1 [i_1] [i_2 + 3])));
            arr_10 [i_1] [2ULL] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
        }
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (long long int i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    {
                        arr_18 [i_1] [i_3] [i_3] [i_5 + 3] [i_3] = ((/* implicit */unsigned short) ((((arr_7 [i_1]) ? (((arr_4 [i_3]) ? (((/* implicit */int) arr_15 [5])) : (((/* implicit */int) arr_4 [11])))) : (min((arr_5 [i_4] [i_4]), (((/* implicit */int) arr_0 [i_1] [i_1])))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (6420558928151479574ULL) : (((/* implicit */unsigned long long int) arr_8 [i_4]))))) ? (((((/* implicit */int) arr_3 [i_4])) << (((441821063U) - (441821062U))))) : (max((arr_5 [1ULL] [1ULL]), (((/* implicit */int) arr_0 [i_1] [i_1])))))) - (71767)))));
                        var_17 -= ((/* implicit */unsigned char) ((1865980760) >= (((((/* implicit */_Bool) -2928363092079856917LL)) ? (max((((/* implicit */int) arr_0 [i_1] [i_1])), (arr_14 [i_1] [(unsigned short)10] [i_4]))) : (((((/* implicit */int) arr_0 [i_1] [i_3])) - (((/* implicit */int) (_Bool)1))))))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (6420558928151479574ULL)));
                    }
                } 
            } 
        } 
    }
    var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 6420558928151479623ULL))))) : (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))) : (((min((((/* implicit */long long int) (_Bool)1)), (1076615189221309963LL))) + (var_5)))));
}
