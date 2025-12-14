/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66421
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((18233507686644440484ULL) >> (((14007560848478635142ULL) - (14007560848478635132ULL)))))));
        arr_4 [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6197392027895759826ULL)) ? (arr_0 [i_1] [i_1]) : (18446744073709551615ULL)))) && (((/* implicit */_Bool) max((11621758803255432711ULL), (8957464494750603695ULL))))));
        arr_7 [14] = (((+(arr_5 [i_1]))) | ((~(max((arr_3 [i_1]), (18ULL))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 1) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) & (arr_0 [i_1] [i_2 - 1])));
            var_23 = ((var_1) | (((15302728702332806549ULL) | (var_5))));
            var_24 = ((/* implicit */int) ((((4611681620380876800ULL) != (18446744073709551582ULL))) ? (((((/* implicit */_Bool) 1536525775)) ? (1ULL) : (4715354480528579868ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12249352045813791760ULL)) ? (arr_1 [i_1]) : (var_4))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            var_25 *= ((((((arr_5 [i_1]) | (((/* implicit */unsigned long long int) var_3)))) / (arr_0 [i_1] [i_1]))) + (((/* implicit */unsigned long long int) -989162275)));
            var_26 *= ((/* implicit */int) max((((/* implicit */unsigned long long int) -1)), (4409459446193688501ULL)));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            arr_18 [i_1] [17] [i_4 - 3] [i_6] [i_3] = ((((10ULL) != (18347241809849481235ULL))) ? (((/* implicit */unsigned long long int) (~(1043530183)))) : (9496989546434957281ULL));
                            arr_19 [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_3])) ? (var_16) : (arr_16 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) 633380512)) ? (((/* implicit */unsigned long long int) -359854458)) : (arr_10 [i_3] [16] [14])))))) ? ((-(arr_2 [i_1] [i_3]))) : (15614972651200971286ULL));
                        }
                    } 
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
        {
            var_27 = var_9;
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                arr_25 [i_8] [i_1] [i_1] [i_1] = var_6;
                arr_26 [i_8] [i_8] [i_8] = ((/* implicit */int) arr_17 [12ULL] [i_1] [i_1] [i_1] [4ULL] [i_1] [i_1]);
                arr_27 [i_1] [i_7] = arr_15 [i_8] [i_8] [i_7] [i_7] [i_1] [i_1];
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 4) 
                {
                    for (int i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        {
                            arr_33 [i_1] [i_1] [i_7] [i_7] [i_1] [i_9] [13ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (arr_23 [i_1] [i_7] [i_1]) : (11837525500378937676ULL))) == (9585325184260667805ULL)));
                            var_28 = arr_12 [i_8];
                        }
                    } 
                } 
            }
            for (unsigned long long int i_11 = 4; i_11 < 21; i_11 += 1) 
            {
                arr_38 [i_1] [i_1] [i_1] = var_19;
                var_29 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_1 [i_1]), (var_15)))) & (max((3028731379579005774ULL), (2644357948726103903ULL)))));
            }
            for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 4) 
            {
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (+(((((/* implicit */_Bool) 15802386124983447726ULL)) ? (((((/* implicit */unsigned long long int) var_13)) / (var_11))) : (((/* implicit */unsigned long long int) max((1357586007), (725041239)))))))))));
                var_31 = ((/* implicit */int) arr_16 [i_7] [i_7]);
                arr_41 [i_12] [i_12] [14ULL] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((15869620787055272290ULL) - (arr_15 [i_12] [i_7] [i_7] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) 15802386124983447721ULL)) ? (5ULL) : (((/* implicit */unsigned long long int) -1)))) : (((((/* implicit */_Bool) 13239781828247375996ULL)) ? (2249631187211576102ULL) : (((/* implicit */unsigned long long int) -192750530))))))) ? (((((/* implicit */_Bool) 2644357948726103895ULL)) ? (((15802386124983447728ULL) << (((var_1) - (1861830707119952745ULL))))) : (14612043863952654880ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 33554431)) ? (4625872069657935553ULL) : (16882171331287903013ULL)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 3; i_13 < 20; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 4; i_14 < 21; i_14 += 3) 
                    {
                        {
                            arr_48 [i_13] [i_13] [i_12] [i_7] [i_1] = arr_37 [i_13] [i_7] [2];
                            var_32 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_28 [i_13 - 2] [i_13 - 2] [i_13 + 2])))) ? (((((/* implicit */_Bool) arr_16 [i_1] [i_1])) ? (var_7) : (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (arr_40 [i_1] [i_7] [i_12]) : (((/* implicit */unsigned long long int) var_15)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12249352045813791737ULL)) ? (var_18) : (13820872004051616063ULL)))) ? (arr_47 [2ULL] [i_12] [i_12 - 1] [i_12] [i_12] [i_12] [i_12 + 1]) : (((12249352045813791760ULL) + (((/* implicit */unsigned long long int) -1216848491))))))));
                            var_33 ^= 12249352045813791762ULL;
                        }
                    } 
                } 
                var_34 *= (-(((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (arr_24 [i_1] [i_12 + 1] [i_12 + 1] [i_1]) : (((/* implicit */unsigned long long int) (~(-1244309049)))))));
            }
        }
        for (int i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((15ULL) - (18446744073709551594ULL)))));
            arr_52 [i_1] [i_15] |= ((/* implicit */unsigned long long int) var_14);
            arr_53 [i_1] [i_1] [i_1] = ((/* implicit */int) ((4655679783159838158ULL) <= (20ULL)));
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 2; i_16 < 21; i_16 += 2) 
    {
        for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 1) 
        {
            for (int i_18 = 0; i_18 < 25; i_18 += 4) 
            {
                {
                    arr_62 [i_16 - 2] [i_17] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */unsigned long long int) 3)) : (arr_59 [i_18] [i_18])))))) ? (13500829757322495855ULL) : (max((16471275045996071394ULL), (39463757576006729ULL))));
                    arr_63 [i_18] [i_18] [i_17] [i_18] = var_6;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
    {
        for (int i_20 = 2; i_20 < 18; i_20 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 1; i_21 < 18; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 19; i_22 += 2) 
                    {
                        {
                            var_36 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_19] [i_20 - 2] [i_21] [i_21])) ? (var_0) : (var_2)))))) ? (((((/* implicit */_Bool) 11837525500378937676ULL)) ? (((/* implicit */unsigned long long int) 1476723307)) : (18446744073709551614ULL))) : (max((arr_51 [i_20 + 1] [i_21]), (((/* implicit */unsigned long long int) arr_13 [i_20 - 1] [i_20 + 1] [i_20 + 1] [i_22])))));
                            var_37 = ((((/* implicit */_Bool) arr_3 [i_19])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_18));
                        }
                    } 
                } 
                arr_74 [16ULL] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2199023255551ULL)) || (((/* implicit */_Bool) 3472859497229517820ULL))));
            }
        } 
    } 
}
