/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75028
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-8899105385579417484LL)))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) 3795523391112158469ULL)))), ((!(((/* implicit */_Bool) 17179869184LL))))))) : (((/* implicit */int) var_3))));
    var_18 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 3795523391112158459ULL)))))) * ((-(((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_2 - 1] [12LL] [i_0] [i_0])))) ^ (((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) arr_2 [i_2]))))) ? (max((3795523391112158441ULL), (arr_1 [i_1]))) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 8388607ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0])) > (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (14264203684465837509ULL)))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_2])))) || (((/* implicit */_Bool) ((arr_2 [i_0]) ? (14651220682597393170ULL) : (14651220682597393170ULL)))))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-((+(min((var_9), (((/* implicit */unsigned long long int) var_3)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */short) var_12);
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4620)) && (((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5))))))))));
                                arr_12 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) -4134945910222627293LL)), (var_9))) == (((((/* implicit */_Bool) var_13)) ? (3795523391112158468ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_2 - 1])))))))) ^ (((((/* implicit */_Bool) (-(14651220682597393156ULL)))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_0] [(unsigned short)11] [i_2] [i_2] [i_4])), (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_4] [i_3] [9U] [i_1] [i_0])) >= (11043762371615528285ULL)))))))));
                                arr_13 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_2 - 1] [i_1])) ? ((((_Bool)1) ? (arr_8 [i_4] [i_2 - 1] [i_0]) : (((/* implicit */long long int) 2696603338U)))) : (arr_8 [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_1 [(_Bool)1])))));
                arr_14 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((min((var_12), (((/* implicit */unsigned long long int) var_3)))) >= (14651220682597393131ULL))))));
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [3ULL] = ((/* implicit */int) min((arr_8 [14LL] [14LL] [i_5]), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 12; i_7 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_1 - 1] [(_Bool)1] [i_0] [i_6 + 1] [i_7 + 1] [i_6 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [5LL] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1 - 2] [i_0]))) : (var_0))) / (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_19 [i_7] [i_1 + 1])))) & ((-(4808744178544446930ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                                arr_26 [i_0] [11LL] = ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) 491809657)) - (((17752086168363004997ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                                arr_27 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7] |= 1152921504606845952LL;
                                arr_28 [i_7 - 1] [i_7 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_5)), (var_6)));
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 12; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_27 = (unsigned short)54050;
                                var_28 = ((/* implicit */unsigned int) arr_29 [i_0]);
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) min(((-(var_13))), (((/* implicit */long long int) min((arr_10 [i_8 + 2] [i_1] [i_5] [i_1] [i_8 + 2]), (((/* implicit */unsigned short) var_3))))))))));
                                arr_34 [i_9] = ((/* implicit */int) (unsigned short)31744);
                            }
                        } 
                    } 
                }
                for (int i_10 = 2; i_10 < 14; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 13; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)28908)), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_10] [i_11] [1ULL])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_3))))))), ((-(max((((/* implicit */unsigned long long int) arr_42 [i_11] [i_1] [i_11] [i_1] [i_1 - 1])), (var_12)))))));
                                arr_43 [i_11] [i_11] [i_1 - 1] [i_11] = ((/* implicit */unsigned short) min(((~(-1LL))), (((/* implicit */long long int) var_7))));
                                arr_44 [i_11] [i_11] [i_11] [i_11] [i_11] = min((((/* implicit */unsigned short) var_5)), (max((((/* implicit */unsigned short) var_5)), (arr_7 [i_1] [i_1]))));
                                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14398)) ? (((/* implicit */int) min((arr_31 [i_0] [7ULL] [7ULL] [i_11] [i_12] [7ULL]), (((/* implicit */unsigned short) (_Bool)1))))) : ((~(((/* implicit */int) var_11)))))))));
                                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((var_3) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-14409)), (716103278)))) : (((var_16) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_17 [i_11])) : (14786787363089795226ULL))))))))));
                            }
                        } 
                    } 
                    var_33 |= ((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) arr_3 [(short)2] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1 - 2]))))));
                    arr_45 [i_0] = ((max((var_11), ((!(((/* implicit */_Bool) var_1)))))) && (((/* implicit */_Bool) (~(var_12)))));
                    arr_46 [i_0] [i_0] [i_10] |= (_Bool)1;
                }
                for (short i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    var_34 &= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_13]))) : ((+(var_8))));
                    var_35 = ((/* implicit */unsigned long long int) min((max((var_0), (((/* implicit */long long int) (!(var_11)))))), (((/* implicit */long long int) (_Bool)1))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)27189)), (var_8)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))))));
}
