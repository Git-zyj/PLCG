/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56877
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
    var_13 = ((/* implicit */unsigned long long int) (unsigned short)31);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == ((-(arr_0 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                            {
                                var_14 &= ((/* implicit */signed char) arr_1 [i_2]);
                                arr_13 [i_0] [(unsigned char)3] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (-5451570518862287999LL))))))) != (((-1645948177) / (((/* implicit */int) var_4))))));
                                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (((unsigned int) arr_3 [i_4] [i_2] [i_0]))))) * (min((max((15919226442589983984ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)62)) >= (((/* implicit */int) var_4)))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (+(arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                                var_17 = ((/* implicit */long long int) ((int) arr_1 [i_1]));
                            }
                            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                            {
                                arr_18 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (2255385610U)))) != (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)24249)))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [10ULL] [i_2 - 1]))) / (((var_5) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))) ? (2103717458357009270ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 - 2] [i_2 + 1])) ? (((arr_1 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24249))))))))))));
                            }
                            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_10)) ? (1060319854) : (((/* implicit */int) (short)-32741)))) - (((/* implicit */int) var_12))))));
                            arr_20 [i_3] [i_2] [i_0] [i_0] [i_0] = ((((((1181650943) << (((((/* implicit */int) (unsigned short)65535)) - (65535))))) >= (((/* implicit */int) ((_Bool) arr_17 [i_0] [i_1] [i_0]))))) ? (((min((((/* implicit */long long int) var_0)), (899882752490409343LL))) % (((/* implicit */long long int) ((2448773624U) << (((arr_7 [i_0] [i_0]) + (1137129695924583119LL)))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2]))));
                            var_19 = 951151135370942974LL;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 9; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) 4503599627108352LL)) ? (29360128) : (((/* implicit */int) arr_5 [i_7] [i_8] [i_8] [i_8])))) % (((/* implicit */int) var_10)))));
                            var_21 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (signed char)-62)) & (var_0))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_11 = 4; i_11 < 7; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned short)49821))))), (min(((-(arr_36 [i_7] [i_7] [i_11] [i_12]))), (((/* implicit */long long int) ((-29360146) ^ (((/* implicit */int) (signed char)43)))))))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(18U)))))) || (((/* implicit */_Bool) var_6)))))));
                                var_24 = ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)-32766)))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)236)) && (((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)1)) ? (var_8) : (((/* implicit */unsigned long long int) var_6)))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-120))))), ((-(-4503599627108352LL))))));
                                var_25 = ((/* implicit */unsigned char) 3799632268U);
                                var_26 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57530)) - (((/* implicit */int) (((~(((/* implicit */int) (signed char)-21)))) < ((+(-1623468792))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
