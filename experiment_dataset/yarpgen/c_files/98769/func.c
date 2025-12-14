/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98769
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
    var_10 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (7701667177566718731LL)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 += ((/* implicit */int) (!(((/* implicit */_Bool) 7701667177566718742LL))));
        var_12 += ((/* implicit */long long int) ((int) arr_0 [i_0]));
        var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (short)19055))) || ((!(((/* implicit */_Bool) var_1))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) -7679953726091289858LL);
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_2]))));
            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [(unsigned char)7] [i_2]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (-(-1628434542160111435LL)));
                var_17 = ((((/* implicit */unsigned long long int) var_9)) % (arr_8 [0LL] [17] [8LL]));
            }
            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    arr_18 [i_5] [11ULL] [i_1] [i_1] [i_2] [(unsigned char)2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) <= (arr_10 [i_4 - 1] [i_4 - 1] [i_4] [i_5])));
                    var_18 = ((/* implicit */unsigned char) ((short) arr_10 [i_4 - 3] [i_4] [i_4] [i_4 - 1]));
                    var_19 *= ((/* implicit */signed char) 7701667177566718724LL);
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_5])) ? (arr_9 [i_2] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (var_6) : (((/* implicit */long long int) -933228470)));
                }
                var_21 = ((/* implicit */short) ((unsigned long long int) ((1628434542160111435LL) / (var_5))));
                var_22 = ((((/* implicit */_Bool) arr_3 [(unsigned char)17])) ? (((/* implicit */unsigned long long int) arr_17 [i_1] [i_2] [i_4] [i_2])) : (arr_3 [i_2]));
            }
            for (unsigned char i_6 = 3; i_6 < 20; i_6 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1628434542160111428LL)) && (((/* implicit */_Bool) var_9))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (unsigned char)0))));
            }
        }
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_20 [i_1] [2ULL] [8]))));
            var_26 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (952260137747667748ULL));
            var_27 = ((/* implicit */short) max((14628900471638523318ULL), (((/* implicit */unsigned long long int) min((var_6), (arr_9 [i_1] [i_7] [(unsigned char)0]))))));
            var_28 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)205))))), (arr_10 [i_1] [i_1] [i_1] [i_1]));
        }
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            var_29 = ((/* implicit */unsigned char) ((2675826733594281913ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5496126162136063476LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) : (4831440228800728569LL)))) ? (var_8) : (((/* implicit */unsigned int) var_9)))))));
            arr_25 [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) var_3);
        }
    }
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) (-2147483647 - 1));
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) min((((/* implicit */unsigned int) ((int) var_5))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-19073))))) ? (max((((/* implicit */unsigned int) (signed char)-36)), (1131889167U))) : (arr_15 [17U] [i_9]))))))));
        arr_30 [i_9] |= ((/* implicit */unsigned char) arr_0 [i_9]);
        arr_31 [i_9] [18ULL] = ((/* implicit */unsigned long long int) var_2);
    }
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                {
                    var_32 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(-3014799667314448466LL)))) / (max((0ULL), (((/* implicit */unsigned long long int) -343132341))))))) ? (11538714604101911318ULL) : (((/* implicit */unsigned long long int) (~(12004370240086764LL)))));
                    var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 11LL))));
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) arr_27 [i_13]);
                        var_35 = arr_29 [i_10];
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) arr_3 [i_10]))));
                    }
                    for (unsigned int i_14 = 2; i_14 < 17; i_14 += 3) 
                    {
                        var_37 *= ((/* implicit */unsigned char) (short)-23950);
                        var_38 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-121)), (arr_2 [i_10])))) ? (7ULL) : (((/* implicit */unsigned long long int) 39LL)))), (min((5425549108548995794ULL), (((/* implicit */unsigned long long int) var_9))))));
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) var_4))));
                    }
                    arr_45 [i_10] [i_11] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_10] [i_11])) ? (3163078129U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [i_11])))));
                }
            } 
        } 
        var_40 = ((/* implicit */short) var_6);
        var_41 &= ((/* implicit */unsigned int) var_9);
        var_42 += ((/* implicit */int) ((unsigned char) var_0));
        var_43 = ((/* implicit */unsigned char) min(((~((+(arr_2 [17LL]))))), (min((arr_43 [i_10] [i_10] [16LL] [i_10]), (((/* implicit */unsigned long long int) 3163078129U))))));
    }
    var_44 = ((/* implicit */int) (~(0ULL)));
    var_45 = ((/* implicit */unsigned long long int) -1628434542160111435LL);
    var_46 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)211))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6))))))))));
}
