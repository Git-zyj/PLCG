/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71559
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((((/* implicit */int) ((_Bool) 2143635189))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) > (4089993210170408331ULL))) ? (((/* implicit */int) ((_Bool) (unsigned char)33))) : (((/* implicit */int) ((unsigned char) (unsigned char)247))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (-1768322169))) : (((/* implicit */int) min((((/* implicit */short) var_10)), (arr_1 [i_0] [i_0])))))));
        var_16 = ((/* implicit */_Bool) (unsigned char)6);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */short) (-(((unsigned long long int) 5013967880079058148ULL))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 8; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((long long int) arr_10 [7LL] [i_3 + 1] [i_3 - 2] [i_3]));
                        arr_14 [i_3 - 2] [i_0] [i_3] = ((/* implicit */short) (!((_Bool)1)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned char)5] [1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-20185))));
                        var_17 = ((/* implicit */int) (short)-24692);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_18 ^= ((1246579263U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                        var_19 = ((/* implicit */unsigned int) ((short) (unsigned char)247));
                        var_20 *= ((/* implicit */int) ((((/* implicit */int) arr_8 [(short)6] [(short)6] [2ULL] [i_4])) < (((/* implicit */int) (!(var_3))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_23 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned long long int) (-(arr_17 [i_0])));
                arr_24 [i_0] [(_Bool)1] [i_6] [(_Bool)1] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) var_10)) ^ (890338600))) : (((/* implicit */int) ((short) var_5)))));
                arr_25 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((int) (_Bool)0));
                var_21 = ((/* implicit */unsigned long long int) ((((var_6) || (var_13))) && (((/* implicit */_Bool) 6274065346444634505LL))));
                var_22 |= ((/* implicit */unsigned long long int) (~(289285418U)));
            }
            for (short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) < ((~(var_14)))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (short i_9 = 2; i_9 < 8; i_9 += 1) 
                    {
                        {
                            var_24 = ((((/* implicit */int) ((var_3) && (((/* implicit */_Bool) 289285398U))))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)10)) < (((/* implicit */int) var_5))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 289285379U)) ? (2837976534U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
                            var_26 ^= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)0))));
                            arr_35 [i_0] [i_1] [2ULL] [i_7] [i_8] [i_9] = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                            var_27 = ((/* implicit */long long int) (_Bool)0);
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-24728)) ^ (((/* implicit */int) var_8))));
                var_29 *= ((unsigned char) (_Bool)1);
                var_30 = (short)32767;
            }
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    arr_42 [i_0] = ((/* implicit */unsigned int) var_6);
                    var_31 = ((/* implicit */_Bool) (~(arr_16 [i_0] [i_11] [i_0])));
                }
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-1207666611) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (short i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                arr_46 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((1456990759U) > (((/* implicit */unsigned int) (-2147483647 - 1))))) ? (-1327374779292175372LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_39 [i_1] [i_1] [i_1] [(_Bool)1] [i_1]))))));
                var_33 = ((/* implicit */short) ((arr_41 [i_0] [i_1] [i_0] [i_0]) != (((/* implicit */int) arr_36 [i_0] [i_12]))));
                arr_47 [i_12] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) var_8)) : (arr_41 [i_0] [i_1] [i_0] [i_0])));
                arr_48 [i_0] [i_1] [i_1] = ((/* implicit */short) (!((!(var_3)))));
            }
            var_34 ^= ((1995353609111627087LL) > (((/* implicit */long long int) arr_11 [i_0] [i_0] [(short)2] [i_0] [i_0] [i_0])));
        }
        var_35 = ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_45 [i_0] [i_0] [i_0])) <= (2147483647))));
    }
    for (int i_13 = 0; i_13 < 20; i_13 += 4) 
    {
        var_36 = ((/* implicit */_Bool) (((-(((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (2844574681241667913ULL))))) >> (((1126224387589935548LL) - (1126224387589935546LL)))));
        var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_50 [13ULL] [13])))) ^ ((~(((/* implicit */int) (_Bool)1))))));
    }
    var_38 = ((/* implicit */_Bool) var_7);
    var_39 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_3)))));
}
