/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86117
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) -790368547)), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (578687375788313945LL))) : (((/* implicit */long long int) 2458849311U)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)9248)), (-1988354297363250316LL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 1])), (-1988354297363250326LL)))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (unsigned short)2))))) : ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) (unsigned short)54517)))) - (54517)))))));
    }
    var_12 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (signed char i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (unsigned short)47683))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned short)54512))));
                                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(signed char)21] [i_4] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]))) : (max((((/* implicit */long long int) arr_7 [i_1])), (arr_12 [i_1] [i_1] [i_1] [i_1 - 2])))))) == (((((/* implicit */_Bool) (short)19459)) ? (((/* implicit */unsigned long long int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 3] [i_1 - 2])) : (0ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                {
                    var_16 &= ((/* implicit */short) ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_10 [17LL] [17LL] [i_2] [i_6] [i_6])) && (((/* implicit */_Bool) (short)-19474))))))) + ((~(((/* implicit */int) arr_7 [i_1 - 2]))))));
                    arr_20 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1 + 1]);
                    arr_21 [i_1 + 1] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(arr_4 [i_2] [(unsigned short)9])))) ? ((~(((/* implicit */int) (short)-19481)))) : (((/* implicit */int) arr_9 [i_1] [i_1 - 2])))), (((((/* implicit */int) (!(((/* implicit */_Bool) 454396103994923564ULL))))) << (((max((var_10), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_2] [i_2] [i_6])))) - (18144658616554578642ULL)))))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((/* implicit */unsigned long long int) -1988354297363250324LL)), (var_2))))));
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                {
                    var_18 &= ((/* implicit */unsigned char) min((max((1988354297363250344LL), (((/* implicit */long long int) (unsigned short)65534)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51703)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)11021))))) : (arr_8 [i_1 - 2] [i_1] [i_2] [i_7]))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_6 [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) < (max((((/* implicit */unsigned long long int) var_0)), (arr_17 [i_1] [i_1] [(unsigned short)23] [10U] [i_1])))))), (((short) (unsigned short)10)))))));
                    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((((_Bool)0) ? (2812013201954600274ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3288683223U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))) : (var_4)))) ? (max((((/* implicit */int) arr_14 [(unsigned short)23] [i_7] [i_7])), (-956559315))) : (((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-19457))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16623))) + (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_17 [i_1 - 3] [i_7] [i_1] [i_1 - 3] [i_1]) : (((/* implicit */unsigned long long int) -4303185700380479175LL))))))));
                    arr_25 [i_2] [i_2] [(unsigned short)15] [i_7] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((8168762270514087173ULL), (((/* implicit */unsigned long long int) (short)19480))))) ? (((((/* implicit */_Bool) arr_18 [i_7] [5LL] [(short)13])) ? (((long long int) 61440LL)) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (max((max((var_5), (var_3))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)17173)), (((((/* implicit */_Bool) var_9)) ? (min((arr_4 [8] [i_8]), (((/* implicit */long long int) (unsigned short)28280)))) : (min((((/* implicit */long long int) arr_22 [i_7])), (-1988354297363250314LL))))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11102147410437346937ULL)) ? (((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1] [i_7])) : (((/* implicit */int) arr_15 [i_1 + 1] [i_2] [i_1 + 1] [i_9] [i_9]))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)28589)) : (-1393218217)))))) : (((((/* implicit */_Bool) (-(arr_12 [i_1 - 1] [13LL] [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 1829305129)) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29339)) ? (((/* implicit */int) (signed char)83)) : (-956559315))))))));
                                arr_32 [i_2] [i_9] [i_7] [i_8] [(unsigned char)10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 17U)) | (max((((/* implicit */unsigned long long int) (signed char)96)), (arr_31 [i_1 - 1])))));
                                var_23 -= ((/* implicit */short) min(((+(((((/* implicit */_Bool) 14310074422276603833ULL)) ? (-3104466864390594470LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))))))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-8114)) + (2147483647))) << (((((/* implicit */int) (unsigned short)65516)) >> (((((/* implicit */int) (signed char)66)) - (50))))))))));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((max((arr_6 [i_1 - 1]), (arr_6 [i_1 - 3]))), (((((/* implicit */_Bool) arr_6 [i_1 - 3])) ? (arr_6 [i_1 - 3]) : (arr_6 [i_1 - 2]))))))));
                var_25 = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
}
