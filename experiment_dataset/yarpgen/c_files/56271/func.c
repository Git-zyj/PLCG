/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56271
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((9491391986515730596ULL) % (max((((/* implicit */unsigned long long int) var_9)), (var_16))))))));
    var_18 ^= ((/* implicit */unsigned int) var_8);
    var_19 = ((/* implicit */short) min(((~(min((((/* implicit */unsigned long long int) -3959292302862524997LL)), (var_16))))), (((/* implicit */unsigned long long int) ((long long int) ((var_4) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) (unsigned char)48);
        arr_3 [(short)10] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)256))) % (13885723380083753145ULL)))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) arr_4 [10ULL] [i_1]);
                var_21 = ((((/* implicit */unsigned long long int) 7021134133005279030LL)) % (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_5 [i_0] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) -3655027357266531217LL)) ? (-3655027357266531217LL) : (3655027357266531216LL))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_23 += ((/* implicit */int) ((((unsigned long long int) arr_2 [i_0])) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -5037229582244121254LL)) : (var_16)))));
                var_24 = ((/* implicit */long long int) ((arr_7 [i_3] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            }
            var_25 = ((/* implicit */short) ((arr_8 [i_0 - 1]) | (arr_8 [i_0 - 1])));
        }
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
        {
            var_26 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 17781539095005006565ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 19; i_5 += 4) 
            {
                for (long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    {
                        arr_19 [i_4] = ((/* implicit */unsigned int) ((((641114285415504570LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-16751))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 3; i_7 < 18; i_7 += 4) 
                        {
                            var_27 ^= ((/* implicit */signed char) (~((+(3655027357266531216LL)))));
                            var_28 += ((/* implicit */int) (!(arr_17 [i_0 - 1] [i_0 - 1] [i_5 - 1] [i_6] [2LL])));
                            arr_22 [i_0 - 1] [i_4] [i_4] [i_5 + 1] [i_6] [i_5 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_0 - 1] [i_7 - 1] [i_6 + 1])) ? (arr_12 [i_6 + 1] [i_0 - 1] [i_7 - 3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            arr_23 [i_0] [i_4] [i_4] [i_5] [i_6 + 1] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10835)))));
                        }
                        arr_24 [i_6] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_6]))) | (arr_16 [i_6]))));
                    }
                } 
            } 
        }
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-3655027357266531217LL)))) : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
            var_30 &= ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)4929)) : (((/* implicit */int) (unsigned short)60607)));
            var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_8] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) 1944995227)) : (arr_12 [i_0 - 1] [i_8] [i_8] [i_0 - 1])));
        }
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            arr_31 [i_9] = ((/* implicit */long long int) (~(arr_16 [i_9 - 1])));
            arr_32 [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)2265), (((/* implicit */unsigned short) (_Bool)1))))) | ((~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((((/* implicit */int) (unsigned short)4929)) | (1574699486)))))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (17074451759471954136ULL))) | (((((/* implicit */_Bool) 0ULL)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9])))))))));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_29 [i_9] [(signed char)7])))) ? (((((/* implicit */_Bool) -3655027357266531217LL)) ? (arr_29 [i_9 - 1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((31) << (((9223372036854775807LL) - (9223372036854775793LL))))))));
            arr_33 [i_9] [i_10] [i_10] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15672))) + ((-(5303193937944042223ULL))))), (max((((/* implicit */unsigned long long int) 2385414917U)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) : (arr_21 [i_10] [(unsigned short)16] [i_9]))))));
        }
        for (short i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            var_33 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_8 [i_9 - 1]) : (arr_8 [i_9 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [(short)12]))) > (arr_35 [i_9 - 1] [7LL]))))) : (((((((long long int) var_11)) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) + (19640)))))));
            arr_37 [i_9] [i_11] [(signed char)16] = ((/* implicit */signed char) arr_36 [i_9]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            var_34 = ((/* implicit */short) (-(((/* implicit */int) arr_34 [i_9] [i_9] [19]))));
            var_35 = ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)0)))) % (((/* implicit */int) (unsigned short)57967)));
        }
        arr_40 [i_9] [i_9 - 1] = (+(arr_13 [i_9] [i_9]));
        arr_41 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3655027357266531217LL)) ? (((/* implicit */int) (unsigned short)4929)) : (((/* implicit */int) (short)-1))));
        arr_42 [12] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (0ULL) : (var_16)))))) ? ((+(arr_35 [i_9 - 1] [i_9]))) : (((/* implicit */unsigned long long int) (-(-4797206325418861373LL))))));
    }
    /* vectorizable */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) (+(((/* implicit */int) arr_44 [i_13 - 1] [i_13 - 1]))));
        arr_46 [i_13 - 1] [i_13] = ((/* implicit */unsigned short) ((arr_15 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1]) | (arr_15 [i_13] [i_13 - 1] [i_13] [i_13])));
    }
}
