/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94233
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
    var_11 = ((/* implicit */int) max(((!(((/* implicit */_Bool) (~(3981526702U)))))), ((!(((/* implicit */_Bool) var_7))))));
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(((((int) 4000364432440372647LL)) / (((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-29941)))))))))));
    var_13 ^= ((/* implicit */long long int) (-((-(3981526702U)))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) (unsigned char)168)))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) 2803023124U)) <= (((((/* implicit */long long int) 3981526684U)) & (-8862549424705900462LL)))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18183)) ? (var_9) : (3981526702U)))) && (var_3)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            arr_6 [1ULL] [i_0] &= ((/* implicit */long long int) (unsigned short)54083);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                arr_10 [i_2] [i_1] [6ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                var_16 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned short)65535))))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U)))));
            }
            for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                arr_13 [i_3] = ((/* implicit */unsigned char) (+(((549755813887LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        {
                            arr_19 [i_5] [i_1] [i_5] [(_Bool)1] [i_5 + 2] = var_9;
                            arr_20 [i_4] [i_1] [i_3] [i_3] [2] [i_1] &= ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)-1)) % (((/* implicit */int) (unsigned char)255))))));
                        }
                    } 
                } 
            }
            var_17 *= ((unsigned char) (unsigned char)24);
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            arr_24 [i_0] [(unsigned char)2] = ((/* implicit */unsigned int) max((max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (18446744073709551613ULL)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) max((((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51678))))), ((!(((/* implicit */_Bool) 503316480U)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned short) (+((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (var_9)))));
                            var_19 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_8) - (((/* implicit */int) (unsigned short)10)))))));
                            var_20 = ((/* implicit */unsigned short) var_0);
                            arr_33 [i_7] = ((/* implicit */long long int) (+(((max((1416217672U), (((/* implicit */unsigned int) var_8)))) * (((/* implicit */unsigned int) var_6))))));
                        }
                        for (int i_10 = 1; i_10 < 8; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((var_9) + (((/* implicit */unsigned int) var_6))))))), (((7870574584712541001LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))))))))));
                            var_22 = ((/* implicit */unsigned char) (~((~(9ULL)))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551615ULL))), (var_7))))));
                            var_24 = ((/* implicit */short) 2803023124U);
                            var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4294967295U)))) ? ((((_Bool)1) ? (6508286805655750146ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29935))) - (1491944153U))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (max((var_7), (((/* implicit */unsigned long long int) -378115997)))))))));
                        }
                        arr_37 [i_0] [i_6] [i_7 + 1] [i_0] [i_0] &= ((/* implicit */unsigned char) min(((((_Bool)1) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */int) var_5)) * (((/* implicit */int) var_2)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))))))));
                        var_26 = ((/* implicit */unsigned int) 786978180);
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((-(((/* implicit */int) (short)30627)))) & (((((/* implicit */int) (unsigned short)11475)) % (((/* implicit */int) (unsigned char)138))))))) <= ((~(-1913191081152428035LL))))))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 805266400U)) ? (786978167) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)24)))))))))))));
        }
    }
    for (short i_11 = 4; i_11 < 10; i_11 += 2) /* same iter space */
    {
        var_29 ^= ((/* implicit */_Bool) max(((~(max((var_9), (2024618771U))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2024618788U)) || (((/* implicit */_Bool) (unsigned char)213)))))) ^ (2270348507U)))));
        var_30 ^= ((/* implicit */unsigned long long int) (((~(1491944148U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) max(((unsigned char)255), (var_10)))), ((unsigned short)4032)))))));
        var_31 = ((/* implicit */unsigned int) (((+(4294967295U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
        var_32 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) -31)), (2803023124U)))), ((+(-1LL)))))), (min((((14654681286361977391ULL) * (14654681286361977391ULL))), (((/* implicit */unsigned long long int) 127))))));
    }
}
