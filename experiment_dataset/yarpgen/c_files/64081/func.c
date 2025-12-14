/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64081
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
    var_11 = ((/* implicit */unsigned char) (+(var_5)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((-(arr_2 [i_0 - 1] [i_1] [i_1])))))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) max((var_2), (arr_0 [i_0 + 2] [i_0 + 2])))), ((-(arr_5 [i_0 - 2])))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_12 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)46))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((+(7ULL))))), (max((((/* implicit */unsigned long long int) max((var_2), (var_0)))), ((+(arr_2 [i_0] [i_1] [i_1])))))));
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))) <= (min((arr_5 [i_0]), (arr_5 [i_0 + 1]))))));
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (((+(var_3))) - (var_3)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */short) (+((-(((/* implicit */int) (short)-31797))))));
                                var_13 = (((+(arr_2 [i_0 + 1] [i_0 - 2] [i_1]))) - ((-(arr_2 [i_0 - 2] [i_0 - 2] [i_1]))));
                                arr_19 [i_1] = ((/* implicit */unsigned int) (~((+(((-2492507484696377946LL) % (arr_1 [i_1] [i_2])))))));
                                var_14 = ((/* implicit */unsigned char) min((arr_3 [i_0 + 2]), (((/* implicit */long long int) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            {
                                arr_25 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(var_7))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (max((arr_17 [i_6 + 2] [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_5 + 3] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_0])) : (var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                                arr_26 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_5 + 1]) : (arr_5 [i_5 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_5 + 1]) : (arr_5 [i_5 + 1]))))));
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 9; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 7; i_9 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) arr_16 [i_0] [i_0 - 2] [i_8 + 1]);
                                arr_34 [i_0] [i_1] [i_1] [i_1] [i_9] [i_9] = ((/* implicit */unsigned char) ((signed char) (~(259316442U))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 4; i_10 < 8; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 9; i_11 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (~(var_3)));
                                arr_39 [i_0] [i_0] [i_1] [i_7] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_20 [i_0 + 2] [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [i_1] [i_7] [i_1] [i_1])))), (((/* implicit */int) var_6))))) ? ((+(min((var_5), (((/* implicit */int) arr_32 [i_0 - 2] [i_1] [i_7] [i_0 - 2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_33 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_1]) ? (((/* implicit */unsigned int) var_3)) : (var_7)))))))));
                                arr_40 [i_0 + 1] [i_1] [i_1] = ((/* implicit */_Bool) arr_8 [i_1] [i_11 - 1]);
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2492507484696377948LL)) ? (((/* implicit */long long int) -873349627)) : (3611085410738835901LL)));
                            }
                        } 
                    } 
                }
                for (short i_12 = 1; i_12 < 9; i_12 += 2) 
                {
                    var_19 = -6680437748379262024LL;
                    arr_44 [i_1] = ((/* implicit */unsigned char) 3611085410738835888LL);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        for (signed char i_14 = 1; i_14 < 12; i_14 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 1; i_15 < 13; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((unsigned int) var_5));
                            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_6))) >= (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                arr_54 [i_13] [i_13] = ((/* implicit */short) ((arr_47 [i_13] [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [i_13] [i_13]))))))))) : (min(((-(-2492507484696377970LL))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_10)), (var_8))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) 
    {
        for (unsigned int i_18 = 1; i_18 < 9; i_18 += 3) 
        {
            for (unsigned char i_19 = 3; i_19 < 6; i_19 += 2) 
            {
                {
                    arr_63 [i_17] [i_17] [i_18 + 1] [i_18] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [i_17] [i_18 - 1])))) != (((/* implicit */int) ((((/* implicit */int) arr_15 [i_18] [i_18 + 1] [i_18 + 1] [i_19 - 1] [i_19])) < (((/* implicit */int) arr_15 [i_17] [i_18 + 1] [i_19] [i_19 + 4] [i_18 + 1])))))));
                    var_22 = ((/* implicit */signed char) ((((((long long int) var_3)) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (short)31313)) : (((/* implicit */int) arr_52 [i_17] [i_17])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 10; i_20 += 2) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                        {
                            {
                                arr_68 [i_17] [i_18 + 1] [i_18] [i_19] [i_19] [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_17] [i_17] [i_17]))));
                                var_23 = ((/* implicit */short) (signed char)123);
                                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-123)), (334645005U))))));
                                arr_69 [i_18] [i_18] [i_18] [i_18 + 1] [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)27905)) : (((/* implicit */int) var_10)))) >> (((max((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (var_3)))), (min((var_7), (((/* implicit */unsigned int) var_5)))))) - (1266141131U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
