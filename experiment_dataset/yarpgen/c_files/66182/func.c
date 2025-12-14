/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66182
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) 293221347727004250ULL);
        var_17 += ((/* implicit */short) ((unsigned char) 2407154132U));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_18 |= ((/* implicit */short) var_2);
        arr_5 [(unsigned short)15] = ((/* implicit */unsigned char) ((3166407541769323190ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((3166407541769323191ULL) >= (3166407541769323190ULL))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_12)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2305843009213693951ULL)))))))));
        arr_8 [i_2] [(signed char)16] = ((/* implicit */short) ((unsigned int) 15280336531940228402ULL));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3166407541769323180ULL)) ? (((var_6) * (3166407541769323213ULL))) : (3166407541769323190ULL)));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) 15280336531940228436ULL)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188)))))));
        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (16483429860374993161ULL)));
                        arr_18 [i_6] [i_5] [i_5] [i_5] [i_3 + 1] = ((/* implicit */unsigned int) ((unsigned char) 0ULL));
                    }
                } 
            } 
        } 
        arr_19 [i_3 - 1] = ((/* implicit */unsigned int) ((var_12) > (((/* implicit */unsigned long long int) ((156956979U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    }
    var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (7305757777346207973ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25794)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 11140986296363343638ULL)) && ((_Bool)0))))) : (156956979U)))) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (unsigned char)18))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 4; i_7 < 8; i_7 += 1) 
    {
        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 1) 
        {
            {
                arr_27 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1073741824U)), (max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)105))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_13) : (18446744073709551615ULL)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (max((1125899906842623ULL), (((/* implicit */unsigned long long int) (short)-28836))))))));
                arr_28 [i_7] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 11140986296363343638ULL))))) & (((((/* implicit */int) (unsigned char)11)) + (((/* implicit */int) var_2)))))));
                arr_29 [i_7] [i_8 - 1] [i_7] = ((/* implicit */_Bool) max((((/* implicit */short) (signed char)66)), ((short)6176)));
                arr_30 [i_7 + 3] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((min((var_2), ((unsigned char)62))), (var_8)))) != (((((8011411686618043304ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16795))))) ? (((/* implicit */int) ((4U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 10405590693516110818ULL)) || (((/* implicit */_Bool) 18446181123756130304ULL)))))))));
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1026633271U))));
                    var_27 = ((/* implicit */long long int) var_15);
                }
            }
        } 
    } 
}
