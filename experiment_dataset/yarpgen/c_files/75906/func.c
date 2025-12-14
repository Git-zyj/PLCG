/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75906
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1429074641)) ? (var_14) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-19))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)10)))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_16))));
                        var_22 = ((/* implicit */unsigned short) (-(((((_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))) : (((unsigned int) arr_13 [i_1] [i_2] [(unsigned short)11] [3U] [5]))))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] = ((/* implicit */short) var_0);
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)26)), (5081140936111083662ULL)));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))))) << (((((/* implicit */int) var_15)) + (56)))))) ? (((((/* implicit */_Bool) var_17)) ? (arr_19 [i_6 + 1] [(signed char)14]) : (16793306709619967535ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
        }
        for (int i_7 = 1; i_7 < 22; i_7 += 4) /* same iter space */
        {
            arr_23 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 1048575ULL)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19951)) ? (min((arr_21 [i_7]), (((/* implicit */int) arr_20 [i_5])))) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_15))))))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    {
                        arr_29 [i_5] [i_9] [i_5] [i_8] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_15 [i_7 - 1]))))));
                        var_25 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 33554431U)) ? (3300682859484276928ULL) : (1985026712818825070ULL)))));
                    }
                } 
            } 
        }
        for (int i_10 = 1; i_10 < 22; i_10 += 4) /* same iter space */
        {
            var_26 = ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_22 [i_10] [i_5]));
            var_27 = ((/* implicit */unsigned long long int) ((max((arr_24 [i_10 + 1] [i_10 + 3]), (((/* implicit */unsigned int) var_10)))) != (((/* implicit */unsigned int) var_14))));
            arr_32 [i_5] [i_5] [i_10 - 1] = var_10;
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 2; i_13 < 24; i_13 += 1) 
                        {
                            arr_41 [i_5] [i_10 + 1] [i_11] [i_11] [i_13] = (-(((/* implicit */int) ((min((arr_19 [i_5] [i_5]), (((/* implicit */unsigned long long int) var_12)))) >= (((/* implicit */unsigned long long int) (~(var_9))))))));
                            arr_42 [i_5] [i_10] [i_11] [i_11] [i_11] [i_13 - 2] = ((/* implicit */unsigned char) (-(min((9525135093541697598ULL), (((/* implicit */unsigned long long int) (signed char)-4))))));
                            var_28 ^= ((/* implicit */unsigned char) min(((signed char)10), ((signed char)25)));
                            var_29 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (var_4)))) % (min((var_3), (((/* implicit */unsigned int) arr_36 [i_12] [i_12])))))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) min((min((arr_24 [i_10 + 2] [i_10 + 2]), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-37)), (1859600185)))))))));
                        }
                        var_31 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_27 [i_10 + 3] [i_10 - 1] [i_10 + 3] [i_10 + 3] [i_10 + 2] [i_10 - 1])) || (((/* implicit */_Bool) var_6)))) ? (((unsigned long long int) arr_22 [i_10 + 2] [i_10 + 3])) : (((/* implicit */unsigned long long int) var_2))));
                        arr_43 [i_12] [i_11] [i_11] [i_5] = min(((+(var_18))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1859600186)) ? (((/* implicit */int) min(((signed char)28), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) ((signed char) 351951990U)))))));
                        arr_44 [i_5] [i_11] [i_5] [i_10] [17] [i_12] = ((/* implicit */int) 16793306709619967548ULL);
                    }
                } 
            } 
            var_32 = ((/* implicit */int) min((var_32), (((int) max((max((var_8), (((/* implicit */unsigned long long int) var_12)))), (arr_27 [i_5] [(_Bool)1] [i_10 + 1] [i_10] [i_10 - 1] [i_10]))))));
        }
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned char)19)) : (1859600198)));
        arr_45 [i_5] = ((/* implicit */int) var_16);
        arr_46 [i_5] [i_5] = ((/* implicit */unsigned short) var_5);
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            arr_55 [i_15] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            arr_56 [12U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((arr_50 [(unsigned char)0]) & (((/* implicit */unsigned int) 1859600180)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) arr_54 [i_14 - 1] [i_14 - 1] [i_14 - 1]))));
            arr_57 [i_14] [i_15] [i_14] = ((/* implicit */unsigned short) ((signed char) var_5));
        }
        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) 
        {
            arr_61 [i_16] [i_14] [i_16] = ((/* implicit */unsigned long long int) var_11);
            arr_62 [i_14 - 1] = min(((-(((/* implicit */int) (signed char)0)))), (((((/* implicit */int) (signed char)-125)) + (1859600180))));
        }
        arr_63 [i_14 - 1] = ((/* implicit */signed char) max(((-(var_9))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))));
        arr_64 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_18)), (var_16)))) ? (((/* implicit */int) arr_33 [i_14 - 1] [i_14] [i_14] [i_14 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [0U] [i_14] [14ULL])))))))) : (min((((unsigned int) (signed char)-13)), (((unsigned int) var_3))))));
        var_34 = ((/* implicit */unsigned short) var_5);
        arr_65 [i_14] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) var_18)))));
    }
    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((unsigned short) var_8)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (0U)))) ? (((((/* implicit */int) (unsigned short)21)) ^ (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
}
