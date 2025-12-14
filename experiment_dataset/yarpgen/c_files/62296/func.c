/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62296
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
        var_20 = ((/* implicit */unsigned int) ((unsigned short) (~(max((var_14), (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_21 = (_Bool)1;
                        arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_2);
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) < (7779008312699523659ULL)))))) % ((-(((((/* implicit */_Bool) 9223372036854775779LL)) ? (((/* implicit */int) (unsigned short)25045)) : (((/* implicit */int) (short)32739))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (2439063642U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))))))));
    }
    for (unsigned char i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        var_23 = ((/* implicit */_Bool) (-(min((7779008312699523652ULL), (((/* implicit */unsigned long long int) 547608330240LL))))));
        var_24 = ((/* implicit */_Bool) arr_0 [i_4]);
        var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4]))))), (((((/* implicit */_Bool) (signed char)30)) ? (7779008312699523656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11427)))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    arr_22 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_4]), (((/* implicit */long long int) var_15))))) ? (((((/* implicit */_Bool) (short)31744)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_5] [i_6]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))))) ? (max((((/* implicit */long long int) var_13)), (arr_13 [i_6]))) : (((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)0)))))))));
                    arr_23 [i_4] [i_5] = max((((((/* implicit */long long int) 3434052591U)) % (9223372036854775807LL))), (((((/* implicit */_Bool) arr_5 [i_4] [i_4 + 1])) ? (arr_5 [i_4] [i_4 - 2]) : (arr_5 [i_5] [i_4 - 1]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max(((-(((var_0) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (min((((((/* implicit */_Bool) arr_19 [i_4] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6))), (((/* implicit */unsigned int) arr_15 [i_4 - 2] [i_7 + 1])))))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    {
                        arr_31 [i_4] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((unsigned long long int) ((short) var_17)));
                        var_27 = ((/* implicit */unsigned int) (unsigned short)16384);
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_4]))) : (max((var_6), (((/* implicit */unsigned int) var_1))))));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 1; i_10 < 16; i_10 += 4) 
        {
            arr_34 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_10 + 1])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)54109))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-5019438811519660316LL))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 8011065027013673927ULL)) ? (((/* implicit */int) arr_28 [i_4] [i_4])) : (((/* implicit */int) (signed char)-123)))))))));
            var_29 = ((/* implicit */unsigned short) 9223372036854775807LL);
            var_30 = ((/* implicit */short) ((arr_3 [i_4 + 2] [i_4 - 1] [i_10 + 1]) | (70368739983360LL)));
        }
        for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 1; i_12 < 17; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    {
                        arr_42 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (1824978469313720288LL) : (9223372036854775795LL))))))), (((long long int) (-(arr_41 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))));
                        arr_43 [i_4] [i_11] [i_12] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? ((-(max((-7674431450057031394LL), (((/* implicit */long long int) (unsigned char)53)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) arr_14 [i_4 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_4] [i_4] [i_4])) >= (((/* implicit */int) var_19))))))))));
                    }
                } 
            } 
            arr_44 [i_4] [i_11] = ((arr_19 [i_4] [i_11 + 1]) % (min((9223372036854775781LL), (((/* implicit */long long int) (unsigned short)1920)))));
        }
    }
    var_31 = ((/* implicit */short) var_15);
    var_32 = ((((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) (_Bool)1)), (9223372036854775799LL))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) << (((/* implicit */int) var_17))))) : (max((((/* implicit */long long int) var_12)), ((~(-9223372036854775786LL))))));
}
