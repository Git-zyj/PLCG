/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56924
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) var_3)) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -5425149526430679123LL))))), (max((((/* implicit */long long int) (_Bool)1)), (var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1]);
                            var_16 = min(((_Bool)0), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2)))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_1] [i_0])), ((((~(((/* implicit */int) (_Bool)1)))) ^ (arr_7 [i_0] [i_0 + 1] [i_0 - 1])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_0] [i_1] [i_0] [i_1])));
                                var_19 = ((((/* implicit */_Bool) var_12)) ? (661816523) : (278353384));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) var_0);
                }
                for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    arr_22 [i_0] [i_1] = ((/* implicit */_Bool) (((-(arr_6 [i_0 - 1] [i_0]))) / ((-(arr_7 [i_0 - 1] [i_0 - 1] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (int i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((min((arr_19 [i_0 + 1] [i_9] [i_9 - 1] [i_9] [i_9 - 2] [i_8] [i_0 + 1]), (arr_4 [i_9] [i_9] [i_0 + 1]))), (((/* implicit */unsigned long long int) var_13))));
                                var_22 = ((/* implicit */long long int) -278353392);
                            }
                        } 
                    } 
                    var_23 = min((((unsigned short) var_0)), (((/* implicit */unsigned short) var_6)));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 2; i_10 < 11; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (+((+((-(var_7)))))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) (_Bool)1))), (arr_16 [i_10 - 1] [i_1] [i_11] [i_10 - 1])))) <= (min((((((/* implicit */int) (unsigned short)25297)) - (((/* implicit */int) var_9)))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_37 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) -278353390)) : (arr_31 [i_1] [i_1] [i_1] [i_1]))), (min((((/* implicit */long long int) arr_36 [i_7] [i_7])), (-6888085612873331829LL)))))) * ((-(arr_19 [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1] [i_13] [i_13])))));
                                var_26 |= ((((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_7] [i_12]) << (((13499750642078755423ULL) - (13499750642078755423ULL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : ((-(var_1))));
                                var_27 = ((/* implicit */unsigned long long int) var_4);
                                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min((max((((/* implicit */int) var_11)), (((((/* implicit */int) arr_5 [i_7] [i_13])) << (((var_5) - (8196562634863724995ULL))))))), (min(((-(((/* implicit */int) (unsigned short)24176)))), (((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_14 = 3; i_14 < 13; i_14 += 3) 
                {
                    arr_40 [i_0] [i_1] [i_14] [i_0] = min((((/* implicit */int) var_9)), (((((/* implicit */int) (_Bool)1)) / (var_3))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_21 [i_0] [i_1] [i_1] [i_1]), (arr_21 [i_0] [i_0] [i_1] [i_1]))))));
                                var_30 = ((/* implicit */unsigned short) ((min((var_2), (((/* implicit */unsigned long long int) -9223372036854775792LL)))) | (((/* implicit */unsigned long long int) ((((max(((-2147483647 - 1)), (-278353398))) + (2147483647))) >> (((min((var_12), (var_12))) - (12868343661438718186ULL))))))));
                                var_31 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_32 [i_14] [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14])) * (((/* implicit */int) arr_32 [i_14] [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14])))) + (((/* implicit */int) ((_Bool) (_Bool)1)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) 
                {
                    var_32 = (((-(arr_19 [i_17] [i_0 - 1] [i_0 - 1] [i_17] [i_0 - 1] [i_0] [i_0]))) << (((arr_27 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]) ? (160020875) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0])))));
                    var_33 = ((long long int) var_8);
                    /* LoopSeq 1 */
                    for (long long int i_18 = 1; i_18 < 12; i_18 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                        arr_54 [i_0] [i_0] [i_1] [i_0] [i_0] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(278353388))) % (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (min((((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))), (max((((/* implicit */unsigned long long int) var_4)), (var_2))))) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))));
                        var_35 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_7))), ((-(((/* implicit */int) (unsigned short)0)))))))));
                    }
                }
            }
        } 
    } 
    var_36 ^= ((/* implicit */int) (+(var_1)));
    var_37 = 230883977;
}
