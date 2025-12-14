/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83282
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_11 &= ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (2047ULL));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3820732209U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
            arr_6 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))));
            var_12 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) arr_1 [15U])));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] = arr_11 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0];
                        arr_13 [i_0] [i_0] [i_2] [23U] [(unsigned char)23] [(unsigned char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_4 + 2] [i_0] [i_4] [i_4])) ? (arr_0 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned int i_6 = 2; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_20 [i_0] [(unsigned char)22] [i_6 - 2])) / (((/* implicit */int) (unsigned short)24520))))))));
                        var_14 = ((/* implicit */unsigned int) ((unsigned short) arr_18 [i_0] [i_0] [i_0]));
                        var_15 = ((/* implicit */unsigned char) ((unsigned int) 268228699U));
                        arr_24 [19ULL] [(unsigned char)19] [i_6] [i_6] [i_6 - 1] [i_6 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 207359455355135461ULL)) ? (2321229191U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111)))))) ? (((((/* implicit */_Bool) 2301978230U)) ? (2321229212U) : (268369920U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_5] [i_5] [i_6]))));
                    }
                } 
            } 
            arr_25 [3ULL] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_0 [(unsigned char)6]) : (((/* implicit */unsigned long long int) 1973738118U)))) & (((/* implicit */unsigned long long int) ((1973738126U) << (((2321229191U) - (2321229171U))))))));
            var_16 += ((/* implicit */unsigned int) ((unsigned char) arr_21 [i_0] [i_4 - 1] [i_4]));
        }
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3704854392U)) < (((((/* implicit */_Bool) (unsigned char)7)) ? (4397778075648ULL) : (((/* implicit */unsigned long long int) 2321229222U))))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)255)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7 - 1] [2ULL] [(unsigned char)14] [i_7]))) & (((((/* implicit */_Bool) (unsigned short)25211)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)13] [(unsigned char)13] [i_7 - 1]))) : (2321229158U))))))))));
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))) ? (10591254965074008544ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_26 [i_7 - 1]))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_19 [i_7] [i_7]) : (arr_26 [i_7]))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) : (2483482285U))), (min((1645216550U), (((/* implicit */unsigned int) arr_20 [i_7] [i_7 - 1] [i_7])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)4)))) / (((unsigned int) var_0))))))));
    }
    for (unsigned int i_8 = 2; i_8 < 12; i_8 += 2) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */_Bool) 7530138872798441395ULL)) ? (((/* implicit */int) (unsigned short)40324)) : (((/* implicit */int) (unsigned char)93)))) : (((((/* implicit */int) arr_20 [i_8 - 2] [(unsigned char)6] [13ULL])) - (((/* implicit */int) (unsigned char)201))))))));
        arr_32 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_30 [i_8] [i_8])) : (((((/* implicit */_Bool) var_9)) ? (arr_29 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)145), (arr_4 [i_8])))) && (((/* implicit */_Bool) arr_0 [i_8])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (unsigned char)91))))) ? (max((1973738126U), (((/* implicit */unsigned int) (unsigned char)146)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)4095))))))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)99))) ? (((unsigned long long int) arr_19 [i_8 + 1] [i_8 - 1])) : (((/* implicit */unsigned long long int) ((((2321229157U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25641))) : (1572864U))) : (min((122299881U), (((/* implicit */unsigned int) var_1)))))))));
        var_22 &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2655065997U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) : (var_0)))) ? (((/* implicit */int) (unsigned short)3072)) : (((((/* implicit */int) (unsigned char)66)) << (((((/* implicit */int) var_6)) - (220))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                {
                    arr_39 [i_9] [i_9] [i_9] [(unsigned char)17] = (-(((((arr_8 [i_9] [i_10]) ? (arr_37 [i_11]) : (3296492193U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))))));
                    var_23 = ((unsigned short) arr_8 [i_10] [i_11]);
                    var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1536)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_16 [i_9] [i_9 + 3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_9] [i_10] [i_10] [(unsigned char)4]))))))));
                    arr_40 [i_9] [i_11] [i_9] = ((/* implicit */unsigned char) arr_0 [i_11]);
                    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)192))), (((((((/* implicit */_Bool) (unsigned char)49)) ? (6690109491724279930ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (~(min((min((((/* implicit */unsigned long long int) (unsigned char)140)), (11504772370499962876ULL))), (min((var_4), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    var_27 = ((/* implicit */unsigned char) ((6941971703209588740ULL) <= (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 2948435497968119219ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153))))), (((/* implicit */unsigned int) ((_Bool) (unsigned char)146))))))));
}
