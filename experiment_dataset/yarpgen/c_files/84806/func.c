/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84806
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */long long int) arr_2 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) var_3);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_18 ^= ((/* implicit */_Bool) arr_6 [i_0] [i_1] [(short)3]);
            arr_7 [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (short)19582))));
                /* LoopSeq 1 */
                for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) (short)-19599)) + (19602)))));
                    /* LoopSeq 4 */
                    for (long long int i_4 = 3; i_4 < 16; i_4 += 3) 
                    {
                        var_21 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 869275805038935880ULL)) ? (var_11) : (arr_4 [12LL]))));
                        arr_15 [i_2] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) ((887839446496805190ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)0] [i_3 - 2])))));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_18 [i_5] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */signed char) var_4);
                        var_22 += ((/* implicit */long long int) arr_5 [i_0] [i_1]);
                    }
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_23 *= ((/* implicit */_Bool) (short)-19606);
                        arr_22 [i_1] [(_Bool)1] [i_1] [i_2] [(_Bool)1] [i_3] = ((((/* implicit */_Bool) arr_14 [i_2] [0ULL] [i_1] [i_1])) ? (-1603377205998175000LL) : (((long long int) arr_19 [i_0] [i_0])));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) (unsigned short)9208);
                        var_25 = (!(((/* implicit */_Bool) arr_14 [i_2] [i_7 + 2] [i_2] [i_3])));
                        var_26 ^= 16ULL;
                        arr_27 [i_3] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) 5279295681021043198ULL);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_30 [i_0] [i_0] [i_2] [i_0] [i_8] = ((/* implicit */_Bool) (short)-19606);
                        arr_31 [i_2] [(unsigned short)4] [i_2] [i_1] [i_1] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_12))));
                    }
                    arr_32 [11LL] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (-6790993565902868565LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) <= (536866816LL)));
                }
                var_27 = ((/* implicit */int) (-(var_4)));
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_28 ^= arr_25 [i_1] [i_1] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1];
                        arr_37 [i_2] = ((/* implicit */signed char) 4285712877313131104LL);
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_2] [i_10 - 1])) / (((/* implicit */int) arr_28 [i_0] [i_1] [i_0] [i_2] [i_10 - 1]))));
                        arr_38 [i_0] [i_2] = ((/* implicit */unsigned long long int) -638091160);
                        arr_39 [i_0] [4LL] [(_Bool)1] [i_2] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) 16126804537768852160ULL)) ? (var_4) : (-1836688171197527045LL)))));
                    }
                    for (int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) 309887957))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-19606)) + (2147483647))) << (((((var_5) + (752447751))) - (17)))))) & (arr_34 [i_2])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        arr_46 [i_2] = ((/* implicit */long long int) (~(((arr_17 [(_Bool)1] [i_9] [i_2] [i_2] [i_1] [i_0] [(_Bool)1]) ? (arr_8 [i_2] [i_2] [i_9] [(_Bool)1]) : (((/* implicit */int) var_1))))));
                        arr_47 [i_0] [i_2] [i_2] [i_2] [i_12] = ((/* implicit */_Bool) 6790993565902868563LL);
                    }
                }
                arr_48 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (_Bool)1);
            }
            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) != (-4005534665796097892LL))))));
        }
    }
    var_33 &= ((/* implicit */int) var_0);
    var_34 = ((/* implicit */unsigned short) var_0);
    var_35 = max((((long long int) 8613916840533646276LL)), (((max((((/* implicit */long long int) -638091151)), (3611912001561933680LL))) ^ (var_12))));
}
