/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87290
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((unsigned char) 11405283431714135419ULL));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) + (var_8)));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)107))));
        var_17 = ((/* implicit */short) var_5);
    }
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_18 = ((/* implicit */int) max((var_18), (min((((/* implicit */int) max((arr_16 [i_3] [i_3]), (((/* implicit */short) var_6))))), ((~((~(((/* implicit */int) var_9))))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_18 [i_5 - 1] [i_5] [i_5 + 1]), (((/* implicit */unsigned long long int) (unsigned short)47812))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1724254387193298454LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) : (3808017751U)))) & (2431035042764171794ULL))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-26910)))))))));
                            var_20 = ((/* implicit */_Bool) var_13);
                            var_21 = ((/* implicit */_Bool) max((((max((((/* implicit */long long int) arr_3 [(_Bool)1] [i_3])), (arr_17 [i_7] [i_3]))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_3])))))), (((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned char)93), (((/* implicit */unsigned char) var_14))))))))));
                            arr_24 [i_3] [(_Bool)1] [i_4] [i_5 + 1] [i_4] [i_6] [i_5 + 1] = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */int) (_Bool)1);
            arr_25 [i_4] [(unsigned short)2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_4] [(short)3] [11LL] [i_3]))))) ? (max((arr_0 [i_4] [i_3]), (((/* implicit */long long int) arr_3 [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (arr_11 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))))))), (((/* implicit */long long int) (short)19106))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            arr_28 [i_3] = arr_26 [i_8];
            var_23 = ((/* implicit */signed char) (short)26910);
            var_24 &= ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) (~(arr_5 [i_3] [i_3] [i_8]))))), ((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26884))) : (arr_0 [i_3] [i_3])))))));
        }
        for (long long int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
        {
            arr_31 [i_9] = ((/* implicit */short) var_16);
            var_25 = ((/* implicit */_Bool) min((var_25), (((var_8) != (((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [i_9] [i_3] [i_9]))))))));
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
        {
            arr_34 [i_3] [i_10] = ((/* implicit */signed char) ((arr_5 [i_10] [i_10] [(_Bool)1]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_10])) ? (arr_33 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
            arr_35 [i_10] = ((/* implicit */_Bool) arr_4 [i_10] [i_10] [i_10]);
            /* LoopNest 2 */
            for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) 
            {
                for (long long int i_12 = 1; i_12 < 11; i_12 += 1) 
                {
                    {
                        arr_44 [i_12] [i_10] [i_11] [i_11] [i_10] [i_3] = ((/* implicit */_Bool) ((short) arr_41 [i_10]));
                        arr_45 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */int) var_3)))) | (((/* implicit */int) arr_42 [i_3] [i_10] [i_11 + 1] [i_12]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            var_26 = ((/* implicit */int) ((((unsigned int) 11405283431714135419ULL)) & (((((/* implicit */_Bool) arr_17 [i_3] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))) : (var_4)))));
                            var_27 -= ((/* implicit */int) ((arr_46 [8LL] [i_13] [i_12 - 1] [i_12 - 1] [i_13]) < (arr_46 [i_11 - 1] [i_13] [i_12 - 1] [i_13] [(short)4])));
                        }
                        var_28 = (~(arr_47 [i_11 + 2]));
                    }
                } 
            } 
            arr_50 [i_3] [i_10] = ((/* implicit */short) (~(((/* implicit */int) (short)(-32767 - 1)))));
        }
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
        {
            var_29 |= ((/* implicit */_Bool) (-(arr_0 [i_3] [i_14])));
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (arr_26 [i_14]) : (((/* implicit */unsigned long long int) -5374183504468893990LL))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) 11714092031786009870ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16916))) : (var_15)))));
            arr_53 [i_14] [i_14] = var_0;
        }
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */short) var_1)), ((short)26910))), (((/* implicit */short) arr_20 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((arr_37 [i_3] [i_3] [i_3] [i_3]), (arr_29 [i_3] [i_3])))))))));
    }
    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_4))));
}
