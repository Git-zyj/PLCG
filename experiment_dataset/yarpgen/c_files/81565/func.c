/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81565
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (var_18) : ((-(var_18)))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_0 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1]))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) >> (((((/* implicit */int) (unsigned short)27005)) - (26980)))))))))));
    }
    for (short i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4227858432U))) | (((((1327059197U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18136))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)41)), ((unsigned short)52533)))))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 3; i_4 < 21; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        var_22 -= ((/* implicit */short) max((((/* implicit */unsigned int) 344487495)), (4227858409U)));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max(((-(min((((/* implicit */unsigned long long int) arr_14 [14U] [i_4] [i_5])), (18235008238661440434ULL))))), (min((((23ULL) / (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)27007))))))))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_8 [14U]))));
                        var_25 = ((/* implicit */int) ((_Bool) (+((+(((/* implicit */int) (short)32665)))))));
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        var_26 = max((var_4), (((((((/* implicit */int) (short)-32346)) | (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (short)14085)))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            var_27 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (~(1013271576219737107LL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (67108871U)))) : (arr_22 [5ULL]))));
            var_28 = ((/* implicit */short) (((-(arr_17 [i_6] [(_Bool)1] [i_7] [i_7]))) + (((arr_17 [i_6] [i_6] [i_6] [i_7]) + (var_8)))));
            arr_23 [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18142))) >= (1231205645U)));
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) 7648410370687535066LL))));
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            for (unsigned char i_10 = 2; i_10 < 18; i_10 += 3) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) max(((-(var_18))), (((/* implicit */unsigned long long int) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        arr_35 [i_8] [(unsigned short)13] [(unsigned short)13] [15] [(short)2] = ((/* implicit */unsigned long long int) arr_12 [i_8] [i_9] [i_11]);
                        var_31 = ((/* implicit */unsigned char) arr_12 [i_9] [i_9] [i_11]);
                    }
                }
            } 
        } 
        arr_36 [i_8] = var_9;
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) arr_0 [i_8]))));
                    var_33 = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_13])) - (((/* implicit */int) (signed char)98))));
                    var_34 = arr_8 [i_12];
                    var_35 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(signed char)6])) && (((/* implicit */_Bool) ((((/* implicit */int) var_15)) - (var_9))))))), (arr_16 [i_8] [i_8] [i_12] [(unsigned char)14] [i_12] [i_12])));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)81))))) >= (max((((var_4) / (var_8))), (((/* implicit */int) ((((/* implicit */int) var_11)) >= (var_16))))))));
                }
            } 
        } 
    }
    var_37 ^= ((/* implicit */_Bool) -1013271576219737090LL);
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)18118)) - (((/* implicit */int) ((var_9) >= (((((/* implicit */int) var_12)) << (((var_9) - (1030108095))))))))));
    var_39 = (((-(var_9))) > (var_8));
}
