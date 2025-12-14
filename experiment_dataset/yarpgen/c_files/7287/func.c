/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7287
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_9)))))))), (((/* implicit */unsigned int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_15))))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_8)))) ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : (((((/* implicit */int) var_9)) & (arr_2 [i_0]))))), (min((max((arr_2 [i_0]), (((/* implicit */int) var_12)))), (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)3)) : (((((/* implicit */_Bool) 1587450505)) ? (((/* implicit */int) (signed char)127)) : (2147483647))))));
                        var_19 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_6))))), (((((/* implicit */_Bool) arr_5 [i_2] [13] [i_0] [13])) ? (var_1) : (((/* implicit */long long int) var_7))))))) ? (((((arr_5 [i_0] [i_1] [i_0] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 3] [i_1] [i_0 - 3]))))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_12))) | (arr_5 [i_3] [i_0] [i_0] [i_0 - 1]))) - (342756217251049865LL))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)252)), (1587450505))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_6))))), (((((/* implicit */_Bool) arr_5 [i_2] [13] [i_0] [13])) ? (var_1) : (((/* implicit */long long int) var_7))))))) ? (((((arr_5 [i_0] [i_1] [i_0] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 3] [i_1] [i_0 - 3]))))) >> (((((((((/* implicit */long long int) ((/* implicit */int) var_12))) | (arr_5 [i_3] [i_0] [i_0] [i_0 - 1]))) - (342756217251049865LL))) - (6521830809331359278LL))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)252)), (1587450505)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0]))));
    }
    for (int i_4 = 3; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_14) != (var_7))))) > (((((/* implicit */_Bool) min((arr_0 [i_4]), (((/* implicit */unsigned int) var_5))))) ? (min((var_0), (((/* implicit */unsigned int) arr_2 [6ULL])))) : (var_7)))));
        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) var_14))), (max((((((/* implicit */_Bool) arr_5 [i_4] [0] [0] [i_4 - 1])) ? (var_10) : (var_8))), (((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (arr_2 [4]))))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_4] [i_4] [3] [i_4] [i_4 + 3] [i_4]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [0ULL] [0ULL] [i_4] [i_4] [i_4] [i_4 + 3])) % (((/* implicit */int) arr_4 [i_4 + 4] [i_4] [i_4 + 4]))))) : (((arr_0 [i_4]) | (var_8)))))) ? (min((max((var_13), (((/* implicit */unsigned int) var_4)))), (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_4 + 1] [(signed char)2] [i_4 + 2])) : (((/* implicit */int) arr_4 [i_4] [i_4] [i_4 - 1]))))));
    }
    for (int i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 1181519262U)) : (3920587880248061331ULL)))) ? (((min((arr_12 [i_5 + 1]), (((/* implicit */unsigned long long int) arr_13 [i_5 - 1])))) >> (((((var_0) | (var_14))) - (4227857394U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5 + 1])) ? (arr_13 [i_5 - 1]) : (arr_13 [i_5 - 1])))))))));
        var_25 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (arr_13 [i_5])))) ? (max((arr_12 [i_5]), (((/* implicit */unsigned long long int) arr_13 [20LL])))) : (((/* implicit */unsigned long long int) arr_13 [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) + (((/* implicit */int) (signed char)3)))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 + 2])) ? (((/* implicit */unsigned long long int) max((arr_13 [20]), (arr_13 [i_5])))) : (((((/* implicit */_Bool) arr_13 [i_5 - 1])) ? (arr_12 [i_5 + 1]) : (((/* implicit */unsigned long long int) arr_13 [i_5]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_12 [i_5 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_13 [i_5]) : (arr_13 [i_5])))) : (arr_12 [i_5 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) arr_13 [i_5])) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) > (arr_13 [i_5]))))))))))))));
    }
}
