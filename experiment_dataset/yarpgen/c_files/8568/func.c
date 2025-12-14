/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8568
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
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (min((((/* implicit */unsigned char) (signed char)5)), ((unsigned char)0)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_1))));
            var_17 *= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_15)) - (((/* implicit */int) var_1))))));
            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) 595202609U)) ? ((-(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) var_2)))))));
            arr_6 [i_1] = (!(((/* implicit */_Bool) var_10)));
        }
        for (short i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_14))));
            arr_9 [i_2 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (_Bool)1))));
        }
        for (int i_3 = 3; i_3 < 23; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (unsigned int i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_16 [i_4] = ((/* implicit */long long int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                        arr_17 [i_0 + 1] [i_4] = ((/* implicit */short) (unsigned short)61403);
                    }
                } 
            } 
            var_21 = ((/* implicit */_Bool) var_9);
            arr_18 [i_0] = ((/* implicit */unsigned int) ((_Bool) (short)-28263));
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_14)))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (short i_7 = 3; i_7 < 21; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (unsigned char)255)))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2929814338U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))))));
                        var_26 = ((/* implicit */long long int) (short)-21125);
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)125)) ? (131064U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)27411))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_14))));
                    var_29 = ((/* implicit */unsigned int) ((var_9) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)230)))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) var_1);
    }
    for (unsigned short i_11 = 3; i_11 < 20; i_11 += 4) /* same iter space */
    {
        arr_34 [i_11 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1270895223U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))))) ? (((/* implicit */int) ((unsigned short) ((unsigned char) (_Bool)0)))) : (((/* implicit */int) (short)27421))));
        var_31 *= (short)-27427;
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            for (short i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) min((((unsigned int) ((short) var_12))), (var_0)));
                    var_33 = ((/* implicit */long long int) max((var_33), (((((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (2527422104U)))))) ^ (((min((4757586316598636632LL), (((/* implicit */long long int) (unsigned char)246)))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42117)))))))));
                    arr_39 [i_13] [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) (((~(-1LL))) % (((/* implicit */long long int) ((/* implicit */int) (short)27395)))));
                }
            } 
        } 
        var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((10LL) - (var_12)))) ? (653251583905502397LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_8)))))))) : (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_5)))))));
    }
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    var_36 = ((/* implicit */long long int) min((((/* implicit */int) var_14)), (((var_9) ^ (((/* implicit */int) var_7))))));
    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) min((((((/* implicit */int) ((595202609U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
}
