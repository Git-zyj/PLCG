/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61880
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7045423434341893254LL)) ? (-2005705092) : (((/* implicit */int) (signed char)81))))) < (arr_6 [i_0] [i_1] [i_0]))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_11 [i_0] [13ULL] [i_2] [19ULL] = ((/* implicit */short) -7042422523044358522LL);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_12 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-109)), (-2488757726874272923LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((7536048660036203053LL) < (((/* implicit */long long int) 1900121395U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) arr_19 [i_0] [i_1] [(signed char)2] [i_3] [i_4]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_6))) : (((((/* implicit */_Bool) -3178304372125955757LL)) ? (((/* implicit */unsigned long long int) 2145339354U)) : (var_11)))))));
                                var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7230676605377193846ULL)) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_13 [11LL] [11LL] [i_0] [11LL])))))))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (var_1)));
                                arr_20 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (arr_16 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3]) : (arr_16 [16U] [16U] [i_3 - 1] [i_3 - 1] [i_3 - 1])))), (min((min((11629786439571040895ULL), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4] [i_4] [4])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)15)))))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (unsigned char)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_16 &= ((/* implicit */signed char) ((min((arr_12 [i_2] [i_1] [i_2] [i_5] [i_2]), (arr_12 [i_2] [i_2] [i_1] [i_0] [i_2]))) < (min((arr_12 [i_1] [i_1] [0] [i_2] [i_5]), (arr_12 [i_1] [i_2] [i_1] [i_1] [i_1])))));
                        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)55))) / (5881347807100212815LL))) ^ (((/* implicit */long long int) max(((~(3595963996U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [3LL] [i_5]))) > (var_8)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_0] [15ULL] [i_7] = ((/* implicit */short) (-(arr_13 [16ULL] [5ULL] [i_0] [i_1])));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) -1112668965)) : (0ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)127)), (arr_1 [i_6])))))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 2; i_8 < 17; i_8 += 4) /* same iter space */
                {
                    arr_31 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_30 [i_8 - 1] [7U] [i_1] [i_0]));
                    var_19 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)4797)))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((4294967295U) > (min((((/* implicit */unsigned int) (signed char)-64)), (arr_18 [i_8 + 2] [2ULL] [(short)18] [i_8] [i_8] [i_8] [i_8 - 2]))))))));
                }
                for (long long int i_9 = 2; i_9 < 17; i_9 += 4) /* same iter space */
                {
                    arr_35 [i_0] = (+(min(((((_Bool)0) ? (8549808492898023342ULL) : (4611123068473966592ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-28)), ((unsigned char)255)))))));
                    /* LoopSeq 4 */
                    for (signed char i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        arr_39 [5U] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((arr_13 [i_9 - 1] [i_9] [i_0] [i_10]) % (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (min((((/* implicit */unsigned long long int) 2305843008676823040LL)), (arr_13 [i_9 + 3] [(signed char)4] [i_0] [i_9])))));
                        arr_40 [i_0] [i_0] [(signed char)19] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_30 [i_9] [i_9] [i_9 + 2] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)28034)))))) : (((((/* implicit */_Bool) 11622833011185860880ULL)) ? (830172965U) : (arr_30 [i_0] [i_0] [i_9 - 2] [i_10])))));
                    }
                    for (signed char i_11 = 1; i_11 < 19; i_11 += 1) /* same iter space */
                    {
                        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_29 [i_9 + 1] [i_11 - 1] [i_11 - 1]) / (arr_29 [i_9 + 3] [i_11 - 1] [i_11 + 1])))) <= ((+((~(15927109575065602294ULL)))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            var_22 += ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_12]))))), ((~(((/* implicit */int) (signed char)-119))))))));
                            arr_45 [17ULL] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_24 [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                    for (signed char i_13 = 1; i_13 < 19; i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_0] [i_0] [i_9] [i_13] = max((((/* implicit */long long int) (-(arr_15 [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_9 - 1])))), (min((5172328111799123711LL), (((/* implicit */long long int) arr_10 [i_13] [i_13 - 1] [i_13 + 1] [i_9 - 1])))));
                        arr_49 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                    }
                    for (signed char i_14 = 1; i_14 < 19; i_14 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(min((min((2515798453375648097ULL), (((/* implicit */unsigned long long int) arr_46 [i_14] [i_9] [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0] [i_1] [i_9] [i_14 - 1] [i_1] [i_0]))) | (1074401622228712834ULL))))))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)30721)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_41 [i_0] [i_1] [i_9] [10ULL]))))))) || (((/* implicit */_Bool) (-(2147483647)))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        for (signed char i_16 = 3; i_16 < 19; i_16 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= ((-(12792584587584163206ULL))))))));
                                arr_57 [i_0] [i_0] [i_16 - 2] [i_16 - 2] [18ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_0]))) ^ (arr_6 [i_0] [i_16] [i_0])))))) ? ((-(3720402734806451847ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_15] [13LL] [i_0])))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) -2320477670647120693LL)) < (min((var_10), (((/* implicit */unsigned long long int) (signed char)127)))))))));
}
