/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64641
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
    var_15 ^= ((/* implicit */long long int) (-((+(min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_2)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_16 *= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) -2147483643)), (var_0))), (((((/* implicit */_Bool) (unsigned char)100)) ? (var_8) : (var_8)))));
        var_17 ^= ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483629)) && (((/* implicit */_Bool) 1303491099721092901ULL))))), ((~(var_2))))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (var_3) : (((/* implicit */int) var_1))))), (var_11))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(max(((~(1303491099721092892ULL))), (((((/* implicit */_Bool) var_5)) ? (8191ULL) : (var_11))))))))));
        var_19 = ((/* implicit */signed char) ((var_14) >= (((((/* implicit */_Bool) ((unsigned long long int) 955067960312668616LL))) ? (var_14) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)112)), (-393320886))))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */int) ((((/* implicit */_Bool) -1356397654654849207LL)) || (((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) var_10)) ? (-2147483629) : (((/* implicit */int) var_7)))))), (((int) (~(var_2))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
            {
                arr_11 [10LL] [4LL] [(short)0] [i_3] |= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) 393320914)) && (((/* implicit */_Bool) (short)-31734))))) : (-2147483638));
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (-(var_0)));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(2147483647))))));
                        }
                    } 
                } 
            }
            for (long long int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((((/* implicit */_Bool) 15957172001981897971ULL)) ? (((((/* implicit */_Bool) 3878729321U)) ? (((/* implicit */unsigned long long int) -1356397654654849198LL)) : (var_4))) : (((/* implicit */unsigned long long int) ((long long int) var_6))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_13))) || ((!(((/* implicit */_Bool) var_7))))))))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(15957172001981897975ULL)))))) ? (((/* implicit */unsigned long long int) max((var_6), (max((var_12), (((/* implicit */int) (short)-31720))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_11) : (((/* implicit */unsigned long long int) (~(911059710))))))));
            }
            arr_19 [i_2] = ((long long int) ((unsigned long long int) var_1));
        }
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 19; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) 2251799813685244ULL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~((-(min((var_0), (((/* implicit */unsigned long long int) -2147483629)))))))))));
                                arr_30 [i_1] [4ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (-(-1356397654654849199LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) 9135897641654155454ULL)) ? (15957172001981897971ULL) : (((/* implicit */unsigned long long int) 3495020316U))))));
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (short)31513))) ? (min((((((/* implicit */_Bool) 2147483628)) ? (var_8) : (((/* implicit */unsigned long long int) 2147483647)))), (3165496280968910050ULL))) : (((/* implicit */unsigned long long int) (-(((int) 4662994043208585435LL)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_3))))))));
                    var_28 = (short)31733;
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((var_12) <= (((/* implicit */int) (short)31742)))) ? (((/* implicit */int) var_10)) : (-2147483625)))), ((~((-(18446744073709551615ULL))))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        for (int i_12 = 4; i_12 < 19; i_12 += 3) 
        {
            for (int i_13 = 2; i_13 < 19; i_13 += 3) 
            {
                {
                    var_30 ^= ((/* implicit */unsigned int) (signed char)123);
                    var_31 = ((/* implicit */short) ((signed char) (unsigned char)238));
                    arr_39 [i_13] [i_12] [i_13] [i_12] = ((/* implicit */unsigned int) ((int) (~(((unsigned long long int) 4351509077576709556ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        var_32 = ((/* implicit */int) ((((0ULL) | (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_1))))))) << ((((~((~(18444492273895866356ULL))))) - (18444492273895866338ULL)))));
                        arr_42 [19] [i_12] [i_12] [i_11] = ((/* implicit */int) var_8);
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(2147483635)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -1)) : (18446744073709551605ULL)))) ? ((-(var_0))) : (15297726545446422393ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-8758443603967252569LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) / (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (short)-31743))))))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned char)156))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (8ULL) : (var_2)))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (6702616484979260154LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((16847689635681468899ULL), (var_8)))))));
    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (+((-(var_8))))))));
}
