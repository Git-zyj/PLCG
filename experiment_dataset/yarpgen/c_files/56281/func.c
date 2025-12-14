/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56281
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((min((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((-232145275) & (((/* implicit */int) (short)2402)))))));
        var_14 = ((/* implicit */int) (+((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (max((((((/* implicit */_Bool) 1123019664U)) ? (-8237838767472657491LL) : (7646596354939053452LL))), (((((/* implicit */_Bool) -8237838767472657494LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8237838767472657490LL)))))));
            arr_4 [i_0] [i_0] [i_0] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27756))) : (var_7)))) ? (((8237838767472657490LL) ^ (8237838767472657499LL))) : (min((((/* implicit */long long int) arr_3 [i_0])), (arr_1 [i_0] [i_1])))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (long long int i_3 = 4; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [(unsigned short)13] [i_2] [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (short)2398)), (17258400612037734190ULL)))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (short)-31211))))))) : (arr_1 [i_1] [i_1])));
                        var_16 = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) max(((_Bool)0), ((!(((/* implicit */_Bool) 6)))))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */int) var_8);
        }
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 4; i_7 < 16; i_7 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) var_11)))) ? (max((((/* implicit */long long int) -1224908752)), (2262407939847032805LL))) : (max((var_4), (var_4))))), (((/* implicit */long long int) arr_5 [i_5] [i_5] [(unsigned char)1]))));
                            var_19 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_8 [i_6]))) >= (((((/* implicit */_Bool) arr_2 [(short)4] [i_4] [i_4])) ? (arr_3 [i_6 + 1]) : (arr_16 [i_7] [i_4] [i_4])))))), (max((((/* implicit */unsigned long long int) ((unsigned short) arr_23 [i_7]))), (((((/* implicit */unsigned long long int) arr_24 [i_7])) * (arr_0 [i_6])))))));
                        }
                        for (unsigned short i_8 = 4; i_8 < 16; i_8 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) 17258400612037734190ULL)) ? (1188343461671817430ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42)))))));
                            var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2399))) : (max((arr_25 [i_8 - 2] [i_0] [i_4] [i_4] [i_4] [i_0]), (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)31207)))))) : ((+(arr_14 [i_8 + 1])))));
                        }
                        arr_28 [i_5] = ((/* implicit */_Bool) (~(arr_21 [i_4] [2])));
                        arr_29 [i_0] [14] [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 1224908751)), (14748077078787371309ULL)));
                    }
                } 
            } 
            arr_30 [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_23 [i_4]), (arr_23 [i_4])))) ? (((int) ((long long int) var_6))) : ((~((-(arr_15 [i_4] [(unsigned char)3])))))));
        }
    }
    for (short i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (unsigned char)202)) ? (-1577640585) : (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */int) var_2)) : (arr_31 [i_9]))))), ((+(((((/* implicit */_Bool) 803921052456457515LL)) ? (arr_31 [i_9]) : (((/* implicit */int) var_8))))))));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            arr_35 [i_9] [i_10] = ((/* implicit */short) min((min((((/* implicit */long long int) (+(-170973481)))), (((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_9] [i_9]))) : (var_7))))), (((/* implicit */long long int) var_2))));
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                for (short i_12 = 3; i_12 < 21; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        {
                            arr_45 [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */long long int) min((1188343461671817425ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1188343461671817443ULL)))))));
                            arr_46 [i_9] [i_12] [i_10] [(short)5] [(short)5] [i_10] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_33 [(short)1] [i_11] [i_13])))))), (((746055866) ^ (arr_36 [i_9] [i_9] [i_11] [i_10])))));
                        }
                    } 
                } 
            } 
            arr_47 [i_9] [i_9] = ((/* implicit */long long int) arr_34 [8ULL] [i_9] [i_9]);
        }
        var_23 = ((/* implicit */unsigned char) ((max((arr_38 [i_9] [i_9]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_40 [i_9] [i_9])) : (((/* implicit */int) arr_32 [i_9] [i_9]))))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_37 [i_9] [i_9] [i_9])))))));
    }
    for (short i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
    {
        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_38 [i_14] [i_14])), (arr_42 [i_14] [5] [i_14] [20LL] [i_14] [i_14])))) ? (((((/* implicit */_Bool) ((int) arr_36 [i_14] [i_14] [i_14] [i_14]))) ? (77357688624552274ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_41 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)-18308)))))))));
        arr_52 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_44 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])), ((unsigned short)32396)))) ? (((/* implicit */unsigned int) max((min((((/* implicit */int) arr_41 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])), (var_0))), (max((((/* implicit */int) (short)1085)), (var_11)))))) : ((((!(((/* implicit */_Bool) arr_34 [i_14] [18ULL] [i_14])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_14] [i_14] [i_14]))))) : (((unsigned int) var_4))))));
        var_25 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_51 [i_14])) : (((/* implicit */int) arr_48 [i_14] [i_14])))) : (((/* implicit */int) max((arr_48 [i_14] [i_14]), (arr_48 [i_14] [i_14]))))));
    }
    var_26 = ((/* implicit */unsigned long long int) (short)-1760);
}
