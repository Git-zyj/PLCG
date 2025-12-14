/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80564
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) (signed char)-32))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_4 [i_2]))))))) / (-6162230874354712752LL)));
                    var_21 = ((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)));
                    var_22 ^= ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(signed char)13])) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2])))) | (((/* implicit */int) arr_6 [(signed char)0] [i_1] [16U] [i_2])))) + (((/* implicit */int) ((-1952868736) >= (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) arr_5 [i_0] [3] [3]);
        arr_9 [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)43)))) != (((/* implicit */int) ((((((/* implicit */int) (signed char)120)) + (((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) min((arr_5 [(short)11] [i_0] [i_0]), (((/* implicit */unsigned short) arr_7 [(_Bool)1] [i_0] [i_0] [i_0]))))))))));
        arr_10 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)57952)) * (((/* implicit */int) (signed char)31)))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3])) && (((/* implicit */_Bool) arr_2 [i_3]))))))) + (((/* implicit */int) ((((/* implicit */_Bool) max((arr_7 [i_3] [i_3] [i_3] [i_4]), ((signed char)63)))) || (((((/* implicit */_Bool) (unsigned short)57952)) || (((/* implicit */_Bool) 12845764442423509659ULL)))))))));
            var_25 += ((/* implicit */unsigned char) arr_5 [2LL] [2LL] [i_3]);
        }
        for (int i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            arr_19 [i_3] [i_5] = ((/* implicit */unsigned short) min((max((((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_5])), (((((/* implicit */int) arr_1 [i_5])) & (((/* implicit */int) (signed char)-18)))))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]))) <= (2517056726U)))) * (((/* implicit */int) ((((/* implicit */long long int) 77527877U)) == (-5225337020218843392LL))))))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3] [i_5] [i_3] [i_7])) + (((/* implicit */int) ((((/* implicit */int) arr_14 [i_3] [i_7] [i_3])) >= (((/* implicit */int) arr_16 [i_3] [i_5] [i_8])))))))) && (((/* implicit */_Bool) 4032939982U))));
                            var_27 &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_7 - 1] [i_8] [i_8] [i_8] [i_6]))) / (630372766733881524ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)129)) / (((/* implicit */int) (signed char)-84))))) ? (((((/* implicit */int) arr_4 [i_3])) / (680166335))) : (((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1] [i_3])))))));
                        }
                    } 
                } 
            } 
            arr_27 [i_3] [i_5 + 2] [i_5] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) -1906339003)) && ((((_Bool)1) && (((/* implicit */_Bool) arr_15 [i_5]))))))));
            var_28 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_5 + 1] [i_3] [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 2])) * (((/* implicit */int) arr_14 [i_3] [i_3] [i_5]))))) + (((((/* implicit */_Bool) arr_20 [i_3] [i_5 - 1])) ? (-3112253775031687904LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_5 + 1])))))));
        }
        /* LoopSeq 1 */
        for (long long int i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            arr_30 [i_3] [i_9] [i_9] = ((/* implicit */unsigned short) ((((((arr_14 [i_9] [i_9] [i_3]) && (((/* implicit */_Bool) (unsigned char)129)))) ? (((((/* implicit */_Bool) arr_20 [i_9] [i_9])) ? (2096412278) : (((/* implicit */int) arr_14 [i_9] [i_9] [i_9])))) : (((/* implicit */int) min(((unsigned short)11679), (((/* implicit */unsigned short) (_Bool)1))))))) & ((+(((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_23 [2] [i_3] [i_3] [i_3]))))))));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            arr_37 [0U] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) arr_16 [i_11] [16LL] [i_3])) < (((/* implicit */int) arr_36 [i_9] [i_12] [i_11] [i_10] [i_3] [i_3] [i_9]))))) + (((((/* implicit */int) arr_4 [i_12])) / (arr_32 [i_3] [i_9] [i_3] [i_3]))))) - (((/* implicit */int) arr_28 [i_9] [i_3] [i_9]))));
                            arr_38 [i_12] [i_9] [i_10] [i_9] [i_3] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)129)), ((short)-13802)))) % (((/* implicit */int) (signed char)-72)))))));
                            arr_39 [i_10] [i_9 - 1] [i_10] [i_10] [i_9] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((-694848276) ^ (((/* implicit */int) (signed char)-116))))) | (((((/* implicit */unsigned int) 1531793289)) ^ (4235336321U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_32 [i_10] [i_9] [i_10] [i_10])) >= (((2981845575U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))))))))));
                        }
                        var_29 = ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 3 */
                        for (signed char i_13 = 2; i_13 < 15; i_13 += 1) 
                        {
                            arr_42 [i_9] [i_10] [i_11] [i_3] |= ((/* implicit */int) ((arr_0 [i_3] [i_11]) & (arr_12 [i_3])));
                            var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) -1531793290)) / (arr_13 [i_13] [(_Bool)1])))) ? (((((/* implicit */int) (signed char)-103)) + (((/* implicit */int) (_Bool)0)))) : (max((((/* implicit */int) arr_15 [i_9])), (694848275))))) < (((/* implicit */int) arr_29 [i_9]))));
                            var_31 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_13] [i_10] [i_3]))) < (4032939982U)));
                            var_32 *= ((/* implicit */unsigned char) ((max(((!(((/* implicit */_Bool) (signed char)5)))), (((((/* implicit */_Bool) (signed char)-116)) || (((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3])))))) ? (((/* implicit */int) (unsigned char)37)) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-11)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)55735)) : (((/* implicit */int) (unsigned short)9647))))));
                            var_33 = ((((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) >= (-771066325431751114LL))) || (((/* implicit */_Bool) arr_23 [i_3] [i_10] [i_9] [i_10])))) ? (min((((/* implicit */int) min(((signed char)33), (((/* implicit */signed char) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_9]))))), (((((/* implicit */int) arr_20 [i_9] [i_9])) ^ (((/* implicit */int) (_Bool)0)))))) : (((arr_31 [i_9 + 2] [i_9 + 2] [i_13 + 3]) ? (((/* implicit */int) arr_31 [i_9 + 2] [i_9 + 2] [i_13 + 2])) : (((/* implicit */int) arr_31 [i_9 + 2] [i_9 + 2] [i_13 + 3])))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_34 &= ((/* implicit */unsigned int) (((((+(((/* implicit */int) (signed char)33)))) + (((/* implicit */int) arr_5 [i_10] [i_10] [i_10])))) << (((3178131838248908837ULL) - (3178131838248908834ULL)))));
                            var_35 = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [(signed char)6] [i_11] [(signed char)9]))));
                            var_36 ^= ((/* implicit */unsigned int) arr_11 [i_11]);
                            arr_47 [(_Bool)1] [i_9] [i_9] [i_11] [i_9] [i_14] = (i_9 % 2 == 0) ? (((/* implicit */unsigned long long int) (((((~(((((/* implicit */int) arr_28 [i_10] [i_11] [i_9])) ^ (((/* implicit */int) (unsigned short)48783)))))) + (2147483647))) << ((((~(((15268612235460642778ULL) >> (((((/* implicit */int) arr_29 [i_9])) - (117))))))) - (17969599941351406529ULL)))))) : (((/* implicit */unsigned long long int) (((((~(((((/* implicit */int) arr_28 [i_10] [i_11] [i_9])) ^ (((/* implicit */int) (unsigned short)48783)))))) + (2147483647))) << ((((((~(((15268612235460642778ULL) >> (((((((/* implicit */int) arr_29 [i_9])) - (117))) + (172))))))) - (17969599941351406529ULL))) - (477144132358117964ULL))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            arr_50 [i_9] [i_9] [i_9] [15LL] [i_9] [i_15] = ((/* implicit */unsigned long long int) (((((((_Bool)1) ? (arr_13 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_3] [i_9 + 1] [i_3] [i_11]))))))) < (((/* implicit */long long int) 558713660))));
                            var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_3])) & (((/* implicit */int) (_Bool)1)))))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_2 [i_15])) : (3178131838248908837ULL)))) && (((/* implicit */_Bool) min((694848278), (((/* implicit */int) arr_23 [i_11] [i_10] [(_Bool)1] [(_Bool)1]))))))))));
                            var_38 += ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_11] [i_11] [i_9 + 1] [i_9 + 1])) == (((/* implicit */int) arr_6 [i_15] [11U] [i_9 + 1] [i_9 + 2])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_48 [i_9] [i_9] [i_9] [i_9] [i_9]))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_2 [i_15])))))) : (((((-1093355714) + (2147483647))) << (((((arr_43 [i_3] [i_9 + 2] [i_3] [i_11] [i_15]) / (((/* implicit */long long int) ((/* implicit */int) (short)7981))))) - (435166175703635LL)))))));
                            arr_51 [i_3] [i_9 - 1] [i_10] [i_9] = ((/* implicit */unsigned short) -694848276);
                        }
                        /* LoopSeq 2 */
                        for (short i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            var_39 = max((arr_49 [i_3] [i_9 + 1] [i_10] [i_9 + 1] [(unsigned short)12] [i_10] [i_3]), (((/* implicit */long long int) 1093355713)));
                            var_40 += ((/* implicit */signed char) arr_3 [i_16]);
                            var_41 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> ((((~(((/* implicit */int) arr_33 [i_3] [i_3] [i_9] [i_3] [i_16] [i_16])))) + (14)))));
                        }
                        for (short i_17 = 1; i_17 < 18; i_17 += 1) 
                        {
                            var_42 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 481021731U)) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_9] [i_3])) : (((/* implicit */int) arr_6 [i_9 + 1] [i_9 + 1] [i_11] [i_9 + 1]))))) || (((/* implicit */_Bool) (signed char)-11))))) <= (((((/* implicit */int) arr_54 [i_17] [16LL] [i_11] [i_10] [i_9 - 1] [i_3])) / (((/* implicit */int) arr_54 [i_3] [i_3] [i_3] [i_10] [i_11] [i_17 - 1])))));
                            var_43 *= ((/* implicit */signed char) 3178131838248908837ULL);
                        }
                    }
                } 
            } 
        }
        var_44 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)124)) & (((/* implicit */int) (unsigned short)5829))))) ? (((/* implicit */int) arr_25 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] [(signed char)14] [i_3])) : (((/* implicit */int) ((((/* implicit */long long int) 654648711)) < (1552356043562318989LL)))))) < (((/* implicit */int) (signed char)-103))));
    }
    var_45 = ((/* implicit */signed char) var_4);
}
