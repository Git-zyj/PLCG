/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63148
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
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8191))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)5]))) == (arr_5 [i_2] [i_0])))))));
                    arr_8 [(unsigned short)17] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4609)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61158)) ? ((-(((/* implicit */int) (unsigned short)6)))) : (((/* implicit */int) (short)-13592)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (unsigned short i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((var_7), (((/* implicit */unsigned long long int) (signed char)-118))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_20 [i_6] [i_4] [i_5 - 2]))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_6] [(short)17])) : (((/* implicit */int) var_3))))))) : (16773120U)));
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_7] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_13);
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_3] [7])) | (((/* implicit */int) var_13))));
                                var_17 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) ((((/* implicit */int) (unsigned char)235)) < (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_3] [i_4] [i_5 - 2] [i_7])) : (((/* implicit */int) arr_21 [i_6] [i_6] [1ULL] [i_6 - 2] [i_6]))))))));
                                arr_23 [i_3] [i_6 - 2] [i_5] [i_6] [i_5] [i_7] [(unsigned short)15] = max((((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_3] [i_6 - 2])) ? (((/* implicit */int) arr_15 [i_7] [i_3] [i_4] [i_3])) : (((/* implicit */int) arr_15 [(short)11] [i_5 + 1] [i_4] [i_3])))), ((-(((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                    var_18 = max((((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) arr_12 [i_5 - 2] [8] [8])))), (((((/* implicit */int) (short)-28725)) * (((/* implicit */int) arr_12 [i_5 - 1] [i_5 - 1] [i_5])))));
                }
            } 
        } 
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((1384455379), (((/* implicit */int) (signed char)-80)))))));
        arr_24 [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-99)) == (var_4))))) == (((unsigned long long int) arr_13 [i_3] [i_3] [i_3]))))), (var_8)));
        arr_25 [i_3] = max((((((/* implicit */int) ((unsigned short) (unsigned short)32768))) + (((/* implicit */int) (unsigned char)18)))), (((/* implicit */int) var_11)));
        var_20 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_21 [i_3] [(signed char)9] [i_3] [i_3] [i_3])) == (((/* implicit */int) arr_13 [(unsigned char)3] [10ULL] [i_3]))))) >= (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [(unsigned short)10])) ? (((/* implicit */int) arr_20 [i_3] [i_3] [i_3])) : (((/* implicit */int) var_12)))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        arr_28 [(signed char)3] = ((/* implicit */short) ((((/* implicit */_Bool) max((3902333644309260723LL), (((/* implicit */long long int) (unsigned char)236))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) ((((/* implicit */int) (short)-7790)) == (((/* implicit */int) (short)13463)))))))) : (((unsigned int) max((((/* implicit */int) (signed char)50)), (214870056))))));
        var_21 ^= ((((16244186115242251277ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)3] [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18264599271073107931ULL));
    }
}
