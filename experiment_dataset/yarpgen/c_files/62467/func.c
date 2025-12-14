/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62467
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_12 *= ((/* implicit */signed char) ((short) var_3));
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) min((((unsigned long long int) arr_4 [i_4] [i_1] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (short)-2213)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1423411823U))))))))));
                            var_13 += ((/* implicit */int) var_8);
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [8U] [i_4]))))) ? (((((/* implicit */unsigned long long int) arr_8 [i_4] [i_3] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8])) - (arr_6 [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_15 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_13 [i_5] [i_2] [11]))))))));
                            arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) max(((short)2195), (((/* implicit */short) (unsigned char)161))));
                        }
                        for (unsigned short i_6 = 3; i_6 < 18; i_6 += 3) 
                        {
                            arr_18 [i_2] [i_2] |= ((/* implicit */short) max(((~(((/* implicit */int) ((unsigned short) var_7))))), (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)40384)))) ? (((/* implicit */int) arr_0 [i_6 - 3])) : (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_2] [i_3])))))));
                            arr_19 [i_0] [i_0] [i_1] [i_6] [i_3] [i_6 - 2] [i_6 - 3] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_10 [i_1] [i_6 - 2] [i_6 - 2] [(unsigned short)10] [i_6])) % (((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_10 [i_0] [(unsigned char)6] [(unsigned char)6] [i_0] [i_6]), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_2]))))), (((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned char)127)) - (99))))))))));
                            arr_20 [i_2] [i_6] [i_3] [i_2] [i_2] [i_2] |= min((((/* implicit */int) (unsigned char)120)), (512297571));
                            var_16 -= ((/* implicit */short) ((unsigned short) ((17100361712689197011ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                        }
                        arr_21 [i_0] [i_1] = ((/* implicit */int) ((((arr_4 [i_0] [i_2] [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */unsigned int) -218054852)) : (1423411846U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29678)) % (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_2)) : (arr_9 [i_0] [i_1] [i_2] [i_0] [i_1]))))));
                        var_17 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
                        arr_22 [i_3] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (((((/* implicit */_Bool) arr_14 [i_0] [18U] [i_0] [(short)3] [i_2] [i_2] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (var_7)))))), (((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_3] [i_3])) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3])))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_25 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_1) : (arr_12 [i_7] [i_2] [i_0])))));
                            var_19 += ((/* implicit */unsigned short) ((unsigned int) ((int) var_6)));
                        }
                        arr_28 [11] [i_1] [(signed char)8] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((short)-15430), (((/* implicit */short) var_5)))), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1))))))))) | ((~(min((arr_6 [16U] [i_2] [i_1]), (((/* implicit */unsigned long long int) var_10))))))));
                    }
                    arr_29 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((var_10) << (((((/* implicit */int) arr_1 [i_2])) + (16869)))))) ? (((int) arr_10 [i_0] [(short)7] [i_2] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_27 [i_0] [8ULL] [i_1] [i_1] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) -1853533515)) ? ((-(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (short)-15))))));
                    arr_30 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_23 [i_1]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_4), (((/* implicit */short) var_5))))) ^ (((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_2] [i_2])))))));
                    var_20 = ((/* implicit */unsigned short) min((2191277974U), (((/* implicit */unsigned int) (signed char)15))));
                    var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_14 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0]))), ((+(((/* implicit */int) var_9)))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_9 = 2; i_9 < 19; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */short) var_10);
                            var_23 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)6306))));
                            arr_35 [i_9] [i_1] [i_9 - 1] [(unsigned char)14] [i_1] [(unsigned char)14] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_1))))), (max((((/* implicit */short) (_Bool)1)), (arr_24 [i_1] [i_1] [(signed char)1] [i_1] [i_1])))))) != (max((((/* implicit */int) (!(((/* implicit */_Bool) 1800681440U))))), (((((/* implicit */_Bool) arr_4 [i_10] [4U] [i_0])) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) (signed char)-126))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (-2147483647 - 1));
}
