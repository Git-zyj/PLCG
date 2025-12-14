/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/657
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
    var_14 = ((/* implicit */unsigned int) var_9);
    var_15 *= ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) arr_1 [i_0]);
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -711057525)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15090))))) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (2097151ULL))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [(_Bool)1] [i_2 + 2] |= ((/* implicit */long long int) (~(((int) (_Bool)1))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((782352182) << (((var_4) - (499205380902842018LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (arr_7 [i_0 - 3])));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? ((+(arr_9 [(_Bool)1] [i_1]))) : (((arr_6 [i_0] [i_0]) / (((/* implicit */long long int) 4134027854U)))))))));
                    var_20 -= ((/* implicit */short) ((int) ((signed char) (signed char)75)));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0]) : (((/* implicit */int) var_8)))) : (((var_10) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        arr_20 [i_3 + 1] [i_3 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_12)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294836224ULL)) || (((/* implicit */_Bool) -1LL))))) : (var_11)));
                        var_22 = ((/* implicit */short) min((((unsigned long long int) (signed char)-126)), (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [i_3 + 1])) : ((~(var_1)))))));
                    }
                } 
            } 
        } 
        arr_21 [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (-1297736384) : (((/* implicit */int) (signed char)-93)))), (((/* implicit */int) ((short) 19ULL))))));
        arr_22 [(signed char)10] &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-44)) ? (arr_16 [(unsigned char)16] [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned long long int) ((int) var_7))) : (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned long long int) var_6)) : (var_13))))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 1) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((0LL), (max((var_4), (((/* implicit */long long int) (signed char)53))))))) ? (((((/* implicit */_Bool) max((16246845141994432542ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) arr_7 [i_7 + 3])) : ((-(var_9))))) : (max((min((997854230520802611ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)249)))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (int i_9 = 2; i_9 < 15; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                                arr_36 [i_7 + 3] [i_7] = ((/* implicit */long long int) 18446744073709551599ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        arr_39 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_35 [i_9 + 1] [i_9 + 3] [i_9 + 1] [i_9 + 1]))));
                        arr_40 [i_7] [i_7] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) var_12);
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26488)) ? (((/* implicit */int) (unsigned short)21681)) : (749090755)))) ? (((/* implicit */unsigned long long int) -18LL)) : ((~(911679982353858054ULL)))));
                    }
                    arr_41 [i_7] [i_7] |= ((/* implicit */int) (unsigned char)191);
                }
            } 
        } 
        arr_42 [i_7] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) (+(var_11)))) < (((var_9) ^ (((/* implicit */unsigned long long int) 217713321)))))), (var_10)));
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
        {
            for (int i_14 = 2; i_14 < 17; i_14 += 1) 
            {
                for (unsigned char i_15 = 1; i_15 < 16; i_15 += 4) 
                {
                    {
                        arr_52 [i_7 - 1] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_15] [i_15 + 1] [i_15 + 1] [i_13])) ? (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_15] [i_15 + 1] [(_Bool)1] [i_13]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_15] [i_15 + 1] [i_15] [i_13]))))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((arr_30 [i_7 - 1] [i_7 - 1]) ? (max((((/* implicit */unsigned int) -217713298)), (4294967295U))) : (((/* implicit */unsigned int) ((int) arr_2 [i_7] [i_7]))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [(unsigned char)12] [(unsigned char)12] [i_14]))))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */int) var_3);
}
