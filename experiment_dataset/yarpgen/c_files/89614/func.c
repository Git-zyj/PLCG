/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89614
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) > (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) var_6)) ? (433550939U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (1960620255)))) ? (((((/* implicit */_Bool) (short)-19317)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */signed char) -1573436238);
            var_13 ^= ((/* implicit */unsigned char) var_4);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_14 ^= ((/* implicit */unsigned char) var_3);
                        arr_16 [i_0] [i_4] [(_Bool)1] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2172472282U))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 3; i_5 < 21; i_5 += 1) 
                        {
                            var_15 ^= ((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43187)))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 + 3] [i_2] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_3 - 2])));
                        }
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_3))));
                            arr_22 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_3 + 2])) : (((/* implicit */int) var_9))));
                            var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_4] [1] [i_2] [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_13 [i_0] [i_2] [i_4] [(_Bool)1])))))));
                            var_19 = (!(((/* implicit */_Bool) var_0)));
                        }
                        var_20 ^= ((/* implicit */_Bool) var_6);
                    }
                } 
            } 
            var_21 ^= ((/* implicit */unsigned short) (((~(arr_4 [i_0] [i_0] [i_0]))) + (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [(_Bool)1]))));
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_26 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (4140699391U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((1806439140U) ^ (1073610752U)))));
            var_22 = ((/* implicit */unsigned char) arr_24 [i_7] [i_0 + 2] [i_0]);
            var_23 ^= ((/* implicit */signed char) (!(arr_24 [i_0] [i_0 - 1] [9U])));
            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2696200241119110938LL)) ? (((/* implicit */unsigned long long int) 4135432455U)) : (18446744073709551603ULL)))) ? (((/* implicit */int) (unsigned short)33836)) : (((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 4]))));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (arr_28 [(_Bool)1] [(short)14]) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_7))));
            arr_32 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)52))));
            arr_33 [i_0] [i_8] [i_0] = ((/* implicit */unsigned long long int) 7272834307117700510LL);
            arr_34 [i_0] = ((/* implicit */int) arr_4 [i_0] [i_8] [i_8]);
        }
        /* vectorizable */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    {
                        arr_43 [i_0] [i_9] [i_0] [i_11] = ((/* implicit */signed char) ((var_1) >= (arr_4 [i_0 - 1] [i_0] [21ULL])));
                        /* LoopSeq 1 */
                        for (short i_12 = 1; i_12 < 20; i_12 += 1) 
                        {
                            arr_46 [(_Bool)1] [i_0] [i_10] [i_11] [i_10] [(unsigned short)4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [i_9] [i_0] [i_0 + 3]))));
                            var_26 = ((/* implicit */unsigned char) ((arr_9 [i_12 - 1] [i_0 - 1]) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) (signed char)-76)))) : (((/* implicit */int) ((unsigned short) var_9)))));
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned int) ((var_3) || (arr_24 [i_0] [i_0] [i_0 + 4])));
            arr_47 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_9 - 1])))));
            arr_48 [i_0] = ((/* implicit */unsigned int) ((var_2) | (((/* implicit */unsigned long long int) 5943395579990712098LL))));
        }
        for (int i_13 = 1; i_13 < 21; i_13 += 1) 
        {
            arr_51 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)24431), (((/* implicit */short) arr_23 [i_13]))))) ? ((((_Bool)1) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (8589918208LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))))))));
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30622)) ? (((/* implicit */int) (_Bool)1)) : (-1682880786))))));
            var_29 ^= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
            var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0 + 4] [i_0 + 1] [i_0])))))));
        }
        for (short i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_61 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_35 [i_0 + 2] [i_14] [20LL])))) && ((!(((/* implicit */_Bool) 7987734136035984537ULL))))));
                        arr_62 [i_0] [i_0] [0LL] [i_0] = ((/* implicit */unsigned short) (((!(var_5))) || (((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) (signed char)-58)))))));
                    }
                } 
            } 
            arr_63 [i_0] [i_0] [8U] = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767)))), (((var_3) ? (((/* implicit */int) arr_42 [i_0] [(_Bool)1] [i_0 + 4])) : (((/* implicit */int) (unsigned char)254))))));
        }
        var_31 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (_Bool)1)))));
        arr_64 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_0 - 2] [i_0 + 3]))))) ? (((arr_5 [i_0 + 4]) & (((/* implicit */int) (short)-12538)))) : (((/* implicit */int) min(((_Bool)1), (var_8))))));
        arr_65 [i_0] = ((short) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    }
    var_32 ^= (-(3952489373U));
}
