/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69947
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)24576)) - (24574)))));
    var_11 = var_9;
    var_12 |= ((/* implicit */short) min((((int) max((((/* implicit */int) (unsigned char)237)), (1879048192)))), (((/* implicit */int) ((((/* implicit */int) max(((short)32767), (((/* implicit */short) (signed char)117))))) < (((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [(unsigned char)14] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_0])), (((-1214918267) & (((/* implicit */int) (unsigned short)56030))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [(short)5] = var_5;
                    arr_11 [i_2] [i_1 - 1] [(unsigned char)12] |= ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_8)));
                    arr_12 [i_0] [i_1 - 2] [i_2] [i_2] |= ((/* implicit */short) ((((int) ((unsigned short) arr_2 [i_0]))) > (((/* implicit */int) max(((unsigned short)42454), (((/* implicit */unsigned short) (unsigned char)80)))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        arr_15 [2LL] [2LL] = ((/* implicit */short) ((unsigned char) ((((((/* implicit */_Bool) (unsigned short)42454)) ? (((/* implicit */int) var_2)) : (var_5))) <= (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned short)42470)))))));
                        var_13 += ((((/* implicit */_Bool) (unsigned short)23094)) ? (((/* implicit */int) (unsigned short)23082)) : (((/* implicit */int) (unsigned short)9514)));
                        var_14 = ((int) 2237059347728453893ULL);
                        var_15 ^= ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)121)), ((unsigned char)112)));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) 279223176896970752ULL);
                        var_17 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7534790285334552604ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [(unsigned char)10]))))), (min((2237059347728453901ULL), (((/* implicit */unsigned long long int) (short)255)))))))));
                    }
                }
            } 
        } 
        var_18 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0])))) - (((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_0))))) * (((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))));
    }
    for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) max((9223372036854775808ULL), (((/* implicit */unsigned long long int) (unsigned short)65520))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_1))));
        var_20 ^= ((/* implicit */short) (unsigned char)17);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56030))) : (-7757059204454853581LL))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_2))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_13 [i_6] [9] [i_5 + 1] [(unsigned char)11] [i_5 - 2]) : (((/* implicit */int) var_3))))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((((/* implicit */unsigned long long int) 1931396387)), (2237059347728453887ULL))))));
    }
}
