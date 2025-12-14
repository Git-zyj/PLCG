/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8241
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
    var_15 = var_11;
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned char)157)), (871365902U)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_16 |= ((/* implicit */unsigned short) min((671423774), (min((arr_6 [i_0] [i_0] [i_1] [(_Bool)1]), (((/* implicit */int) (signed char)121))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */int) arr_10 [(signed char)15] [i_1] [i_2] [i_3 - 2] [i_4])) / (var_1)))), (var_14))), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) 4503599627108352ULL)) && (((/* implicit */_Bool) 3663544617915771458LL))))), (-671423784))))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((671423767) | (((/* implicit */int) (short)-18399)))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (short)-64))));
                                var_19 = ((/* implicit */int) min((-3663544617915771464LL), (-5273260865036727207LL)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((var_3) / (6977979902455716531ULL)));
                    var_21 += var_3;
                }
            } 
        } 
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)143)) % (((/* implicit */int) (unsigned char)108))))) ? (((((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_0 - 1] [i_0 - 1] [i_0]), (((/* implicit */unsigned short) var_13)))))) % (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1])))));
    }
    for (long long int i_5 = 1; i_5 < 15; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (signed char)99))));
        arr_15 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1])) ? (arr_4 [i_5] [i_5]) : (arr_4 [i_5] [i_5 - 1])))) ? (((((/* implicit */int) (unsigned char)180)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (arr_4 [i_5] [19]))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (_Bool)1))));
                    var_25 = (short)63;
                }
            } 
        } 
        arr_22 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5])) || (((/* implicit */_Bool) var_5))))), (min((arr_19 [7U] [i_5]), (((/* implicit */unsigned long long int) var_7))))))) || (((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) -7775827976535094994LL))))));
    }
    for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_26 = ((/* implicit */signed char) var_3);
        arr_25 [i_8] = ((/* implicit */_Bool) ((var_10) | (min((((/* implicit */long long int) arr_0 [i_8])), (min((arr_3 [i_8]), (((/* implicit */long long int) var_0))))))));
        arr_26 [i_8] [i_8] = ((/* implicit */signed char) ((max((((/* implicit */long long int) 3638106061U)), (-7591923263986787583LL))) / (((((((/* implicit */_Bool) (short)-18399)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5221705875842342451LL))) * (((((/* implicit */_Bool) (unsigned char)109)) ? (5538965520204714887LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
    }
}
