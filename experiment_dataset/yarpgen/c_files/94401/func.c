/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94401
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((int) arr_0 [i_0])))));
        var_17 = ((unsigned long long int) (short)-1);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_18 -= ((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)96))))));
        var_19 = ((/* implicit */unsigned char) var_5);
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            var_20 -= ((/* implicit */unsigned int) ((unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_0 [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))));
            var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL))))), (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (17007471029156577613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1439273044552974003ULL) <= (17007471029156577613ULL)))))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_2 - 1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((16972612728282626454ULL) != (((/* implicit */unsigned long long int) var_8)))), ((!(((/* implicit */_Bool) var_4)))))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        arr_15 [i_1] [i_2 + 2] [i_2] [i_4] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 0U)), (arr_8 [i_1] [i_3 - 1] [4ULL])))), (16972612728282626454ULL))), (((/* implicit */unsigned long long int) arr_7 [i_3 - 1] [(unsigned char)8] [i_2 + 1]))));
                        var_23 = 18446744073709551615ULL;
                        arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) 2009386344)), (((1474131345426925161ULL) - (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2 + 2] [i_3]))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (-(arr_7 [i_2] [i_2 + 2] [i_5 - 1])))) : (arr_9 [i_1] [i_2])));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) 1439273044552974003ULL);
                    arr_21 [9] [i_2] [i_2] [i_6] = min(((~(1474131345426925161ULL))), (arr_19 [i_1] [i_2] [i_5 + 1] [i_6] [i_6] [i_2]));
                }
                for (long long int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((1469819745), (((/* implicit */int) (unsigned char)129))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 368858187U)) || (((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1])))))) : (min((arr_19 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5 - 1] [i_5 + 1] [i_2]), (((/* implicit */unsigned long long int) (unsigned char)176))))));
                    var_27 = ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_23 [i_1] [10ULL] [i_1] [i_1] [i_1]), (arr_23 [i_1] [i_2] [i_2 - 1] [i_5] [i_7])))), (((((/* implicit */int) (!(((/* implicit */_Bool) 193037840))))) ^ (((/* implicit */int) arr_3 [i_1]))))));
                    arr_24 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~((~((-2147483647 - 1))))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((2143289344U), (((/* implicit */unsigned int) (unsigned char)10))))), (min((0ULL), (1439273044552974003ULL)))))) ? (min((((/* implicit */unsigned int) (~(-1469819745)))), (arr_10 [i_1] [8U]))) : (((((arr_4 [i_5]) >= (((/* implicit */unsigned long long int) 0U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (2800574337U))))))));
                }
                for (long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) -618514140)) >= (0U))))))), (arr_10 [i_2] [i_8])));
                        var_30 = var_13;
                    }
                    arr_29 [i_2] = ((/* implicit */unsigned long long int) var_11);
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((2151677952U) % (4294967295U))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))), ((unsigned short)0)))) ? (((/* implicit */int) (unsigned short)65535)) : (-388816320)));
                }
                arr_30 [6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [7LL])) ? (arr_9 [i_2 - 1] [6ULL]) : (((/* implicit */unsigned long long int) var_12))))) || ((!(((/* implicit */_Bool) arr_1 [i_2 + 1]))))));
                var_33 = ((/* implicit */int) arr_19 [i_1] [i_1] [i_5 + 1] [i_2 - 1] [i_5 + 1] [i_2]);
            }
        }
    }
    for (long long int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) 3079023128U))));
        arr_33 [(unsigned char)1] = ((/* implicit */int) max((var_12), (((/* implicit */unsigned int) arr_1 [i_10]))));
    }
    var_35 &= ((/* implicit */unsigned int) max(((unsigned short)60368), (((/* implicit */unsigned short) ((unsigned char) var_9)))));
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) min((((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)0)), (-1682721725))))))) : (min((max((((/* implicit */unsigned long long int) var_4)), (561850441793536ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) + (2599832073731208050LL))))))));
}
